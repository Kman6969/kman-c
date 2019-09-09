//program to print the entered digits in words


#include<stdio.h>
int main()
{
	int n,n1,d,sum=0;
	while(n<9)
	{
	printf("\nEnter a number : ");
	scanf("%d",&n);
	switch(n)
		{
			case 0: printf(" ZERO");
					break;
			case 1: printf(" ONE");
					break;
			
			case 2:printf(" TWO");
					break;
			case 3:printf(" THREE");
					break;
			case 4:printf(" FOUR");
					break;
			case 5:printf(" FIVE");
					break;		
			case 6:printf(" SIX");
					break;
			case 7:printf(" SEVEN");
					break;
			case 8:printf(" EIGHT");
					break;
		
			case 9:printf(" NINE");
					break;
		}

	}
	return 0;
 }