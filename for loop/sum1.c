//sum of all numbers between m and n


#include<stdio.h>
int main()
{
	int i,n,m,sum=0;
	printf("\nEnter  first number : ");
	scanf("%d",&n);
	printf("\nEnter second number : ");
	scanf("%d",&m);
	for(i=n;i<=m;i++)
		sum=sum+i;
	printf("\nSum of numbers between %d and %d is : %d \n",n,m,sum);
	return 0;
}