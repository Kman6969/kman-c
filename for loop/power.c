//finding power without function

#include<stdio.h>
int main()
{
	int x,n,i,pow=1;
	printf("\nEnter base x and power n : ");
	scanf("%d%d",&x,&n);
	if(n==0)
		printf("\npower is 1\n");
	else
	{
	for(i=1;i<=n;i++)
		pow=pow*x;
	printf("%d",pow);
	}
}