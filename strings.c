#include<stdio.h>
void length(char str1[50])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
		;

	printf("\nLength is : %d",i);
}

int copy(char str1[50])
{
	char str2[30];
	int i;
	for(i=0;str1[i]!='\0';i++)
		str2[i]=str1[i];
	str2[i]='\0';
	printf("\nCopied string is : %s",str2);
} 

void attach(char str1[50])
{
	char str2[50];
	int i,ch,j;
	printf("\nEnter second string: ");
	scanf("%s",str2);
	
	for(i=0;str1[i]!='\0';i++)		
		;
	j=0;	
	for(j=0;str1[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;			
	}
	str1[i]='\0';

	printf("\nConcatinated string is  : %s ",str1);
	
}


void reverse(char str1[50])
{
	int i,j,t;
	for(j=0;str1[j]!='\0';j++)
		;
	j--;
	i=0;
	while(i<j)
	{
		t=str1[i];
		str1[i]=str1[j];
		str1[j]=t;
	
	j--;
	i++;
	}
	printf("\nReversed string is : %s",str1);
}	
int palindrome(char str1[50])
{
	int i,j,flag=1;
	for(j=0;str1[j]!='\0';j++)
		;
	j--;
	i=0;
	while(i<j)
	{	
		if(str1[i]!=str1[j])
			{
				flag=0;
				break;
			}		
		j--;
		i++;
	}
	return flag;
}
int replace(char str1[50],char ch1,char ch2)
{
	int i;
	for(i=0;str1[i]!=0;i++)
	{
		if(str1[i]==ch1)
			str1[i]=ch2;
	}
}

int casechange(char str1[50])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
			str1[i]+=32;
		else if(str1[i]>=97 && str1[i]<=122)
			str1[i]-=32;
	}
	printf("%s",str1);
	printf("\n");
}

int count(char str1[50])
{
	int i,acnt=0,vcnt=0,dcnt=0,cnt=0,ucnt=0,lcnt=0;
	for (int i = 0;str1[i]!='\0';i++ )
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		vcnt++;
		else if(str1[i]>=48 && str1[i]<=57)
		dcnt;
		else if((str1[i]>=65 && str1[i]<=90)||(str1[i]>=97&&str1[i]<=122))
		acnt++;
		 if(str1[i]>=65 && str1[i]<=90)
		ucnt++;
		 if(str1[i]>=97 && str1[i]<=122)
		lcnt++;
		else	
		cnt++;
	}
printf("\nAlphabet count: %d\nAppearance of a vowel : %d \nDigit count: %d\nUpper case : %d\nLower case: %d\nOther(consonants ans special characters): %d ",acnt,vcnt,dcnt,ucnt,lcnt,cnt);
}



int main()
{
	int ch,ans;
	char str1[50],str2[50],ch1,ch2;
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	do
	{
		printf("\n\n%s",str1);
		printf("\n1.Find length of string \n2.Copy string to a new string \n3.Concatinate two strings \n4.Reverse a string \n5.Check palindrome \n6.Replace a character \n7.Count\n8.Change case \n9.Exit\n\n\n");			
		printf("\n\nOriginal string str1 will be changed for some cases \n\n\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: length(str1);
					break;
			case 2: copy(str1);
					break;
			case 3: attach(str1);
					break;
				
			case 4: reverse(str1);
					break;			
			case 5: ans=palindrome(str1);
					if(ans==1)
					printf("\nIt is a palindrome string");
					else
					printf("it is not a palindrome string");
					break;
			case 6: printf("\nEnter a character to replace: ");
					scanf(" %c",&ch1);
					printf("\nEnter what to replace %c with : ",ch1);
					scanf(" %c",&ch2);
					replace(str1,ch1,ch2);
					break;			
			case 7: count(str1);
					break;
			case 8: casechange(str1);
					break;				

		}

	}while(ch!=9);
return 0;
}