#include<stdio.h>
int main()
{
	int i,n;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	printf("\nreverse is : ");
	while(n!=0)
	{
		printf(" %d ",n%10);
		n=n/10;
	}
	return 0;
}