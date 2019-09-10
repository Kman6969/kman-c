//first n fibonacci numbers without function
#include<stdio.h>
int main()
{
	int a=1,b=1,c,n,i;
	printf("enter n : ");
	scanf("%d",&n);
	if(n==1)
		printf("%d",a);
	if(n>=2)
		printf("%d %d",a,b);
		n=n-2;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;	
	}
	return 0;
}