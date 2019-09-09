#include<stdio.h>
int main()
{
	int i,count=0,sum=0,n,d=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum+n%10;
		count++;
		n=n/10;
	}
	printf("sum is %d count is %d",sum,count);
	return 0;
}