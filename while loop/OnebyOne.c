#include<stdio.h>
int main()
{
	int n,i,rev=0;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	i=rev;
	while(rev!=0) //reverse twice and display
	{
		i=rev%10;
		
		rev=rev/10;
	printf(" %d ",i);
	}	
	return 0;

}