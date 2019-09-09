//to find if a nnumber is prime or not
#include<stdio.h>
int main()
{
	int n,i,ans=0;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			ans++;
	}
	if(ans==2)
		printf("\n%d is a prime number",n);
	else
			printf("\n%d is not a prime number",n);
	return 0;
}