//first n fibonacci numbers without function
#include<stdio.h>
int main()
{
	int a=1,b=1,c,n;
	printf("enter n : ");
	scanf("%d",&n);
	if(n==1)
		printf("%d",a);
	if(n>=2)
		printf("%d %d",a,b);
		n=n-2;
	while(n!=0)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
		--n;
	}
	return 0;
}