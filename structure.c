#include<stdio.h>

typedef struct student
{
	int roll;
	char name[30];
	float m1,m2,m3,tot,avg;
}student;

void readstud(student st[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter roll number of %d student: ",i+1);
		scanf("%d",&st[i].roll);
		printf("\nEnter name of %d student: ",i+1);
		scanf("%s",st[i].name);
		printf("\nEnter marks of 3 subjects: ");
		scanf("%f%f%f",&st[i].m1,&st[i].m2,&st[i].m3);
		st[i].tot=st[i].m1+st[i].m2+st[i].m3;
		st[i].avg=st[i].tot/3;
	}
}

void display(student st[],int n)
{
	int i;
	printf("\nRoll\t\tName\t\tTotal\t\tAverage\n");
	for(i=0;i<n;i++)
		printf("%d\t\t%s\t\t%f\t\t%f\n",st[i].roll,st[i].name,st[i].tot,st[i].avg);
}

void greater(student st[],int n,float p)
{
	int i;
	printf("\nRoll\t\tName\t\tTotal\t\tAverage\n");
	for(i=0;i<n;i++)
	{
		if(st[i].avg>p)
		printf("%d\t\t%s\t\t%f\t\t%f\n",st[i].roll,st[i].name,st[i].tot,st[i].avg);			
	}
}
int search(student st[],int n,int x)
{
	int i,loc=-1;
	for(i=0;i<n;i++)
	{
		if(st[i].roll==x)
		{
			loc=i;
			break;
		}
	}
	return loc;
}

int max(student st[],int n)
{
	int i,loc=-1,max;
	max=st[0].avg;
	for(i=1;i<n;i++)
	{
		if(st[i].avg>max)
		{
			max=st[i].avg;
			loc=i;
		}
	}
	return loc;
}

int main()
{
	student st[100];
	int i,n,ch,ans=0,x,loc;
	float p;
	printf("\nEnter number of students : ");
	scanf("%d",&n);
	readstud(st,n);
	do
	{
		printf("\n1.Display details\n2.students having percentage > \n3.Search \n4.Max\n5.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:	display(st,n);
				break;
		case 2: printf("\nEnter percentage: ");
				scanf("%f",&p);
				greater(st,n,p);
				break;
		case 3: printf("\nEnter roll number");
				scanf("%d",&x);
				loc=search(st,n,x);
				if(loc==-1)
					printf("\nStudent not found\n");
				else
				{
					printf("\nRoll : %d",st[loc].roll);
					printf("\nName: %s",st[loc].name);
					printf("\nTotal : %f",st[loc].tot);
					printf("\naverage: %f",st[loc].avg);

				}
				break;
		case 4:loc=max(st,n);
				printf("\nRoll : %d",st[loc].roll);
				printf("\nName: %s",st[loc].name);
				printf("\nTotal : %f",st[loc].tot);
				printf("\naverage: %f",st[loc].avg);
				break;
		default: printf("\n");
		}
	
	}while(ch!=5);

	return 0;
}