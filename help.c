#include<stdio.h>
void scanarray(int a[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

}

void printarray(int a[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
			
}

void addarray(int a[10][10],int b[10][10],int m,int n)
{
	int i,j,c[10][10];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\n\n\n\n\n\n");	
	printarray(c,m,n);

}

void subtractarray(int a[10][10],int b[10][10],int m,int n)
{
	int i,j,c[10][10];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]-b[i][j];

	printf("\n\n\n\n\n\n");	
	printarray(c,m,n);
		
}

int upper(int a[10][10],int m,int n)

{
	int i,j,flag=1;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>j && a[i][j]!=0)
					{
						flag=0;
						break;
					}
			}
		}	
		return flag;
}

int lower(int a[10][10],int m,int n)

{
	int i,j,flag=1;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<j && a[i][j]!=0)
					{
						flag=0;
						break;
					}
			}
		}	
		return flag;
}

int identity(int a[10][10],int m,int n)
{
	int i,j,flag=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
				{
					flag=0;
					break;
				}
		}
	}
	return flag;
}

void trace(int a[10][10],int m,int n)
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==j)
				sum=sum+a[i][j];
		}

		printf("\n\n\n\n\n\n");	
		printf("\nTrace is : %d",sum);
}


int symmetric(int a[10][10],int m,int n)
{
	int i,j,flag=1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				flag=0;
				break;
			}

		}
	return flag;
}
void multiply(int a[10][10],int b[10][10],int p,int q,int m)
{
	int i,j,k,sum=0,c[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
				sum=sum+a[i][k]*b[k][j];
		
		c[i][j]=sum;
		sum=0;
		}
	}
	
	printf("\n\n\n\n\n\n");	
	printarray(c,m,q);
}

void sumone(int a[10][10],int m,int n)
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			sum=sum+a[i][j];

	printf("\nSum of matrix is :  %d ",sum);
}
int main()
{
	int a[10][10],m,n,b[10][10],ans=0,ch,p,q;
	printf("\nEnter order of first array");
	scanf("%d %d",&m,&n);
	printf("\nEnter elements of array :\n ");
	scanarray(a,m,n);
	do
	{
		printf("\n1.Add two \n2.Subtract two \n3.Upper \n.4.Lower \n5.Identity \n6.trace \n7.symmetric \n8.multiply \n9.sumone \n10.Exit\n\n\n");

		printarray(a,m,n);
		printf("\n\n\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter order of seconf array ");
					scanf("%d%d",&p,&q);
					if(m==p && n==q)
					{
						printf("\nEnter elements of second array");
						scanarray(b,p,q);
						printarray(b,p,q);
						addarray(a,b,m,n);
					}
					else
						printf("\naddition not possibe");
							break;
			case 2: printf("\nEnter order of seconf array ");
					scanf("%d%d",&p,&q);
					if(m==p && n==q)
					{
						printf("\nEnter elements of second array");
						scanarray(b,p,q);
						printarray(b,p,q);
						subtractarray(a,b,m,n);
					}
					else
						printf("\nsubtraction not possibe");
					break;
			case 3: ans=upper(a,m,n);
					if(ans==1)
						printf("\n\n\nIs upper");
					else
						printf("\n\n\nis not upper");
					break;
			case 4: ans=lower(a,m,n);
					if(ans==1)
						printf("\n\n\nIs lower");
					else
						printf("\n\n\nis not lower");
					break;		
			case 5: ans=identity(a,m,n);
					if(ans==1)
						printf("\n\n\nIs identiry");
					else
						printf("\n\n\nis not identiry");
					break;	
			case 6: ans=symmetric(a,m,n);
					if(ans==1)
						printf("\n\n\nIs symmetric");
					else
						printf("\n\n\nis not symmetric");
					break;	
			case 7: trace(a,m,n);
					break;
			case 8 : printf("\n\nEnter order of second array:");
					scanf("%d %d",&p,&q);
					if(n!=p)
						printf("\nMultiplication is not possible");
					else
					{
						printf("\nEnter elements of second array");
						scanarray(b,p,q);
						printf("\n\n\n\n");
						printarray(b,p,q);
						multiply(a,b,p,q,m);
					}
					break;

			case 9 : sumone(a,m,n);
						break;
			
			case 10 : printf("\n");
					break;

			default:printf("\nEnter valid choice");
		}
	}while (ch!=10);
	return 0;
}