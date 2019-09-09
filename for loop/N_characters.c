//accept a character and print next n characters according to ASCII values
#include<stdio.h>
int main()
{
	int n,i;
	char ch;
	printf("\nEnter a charachter : ");
	scanf("%c",&ch);
	printf("\nEnter n : ");
	scanf("%d",&n);
	printf("\nNext %d characters are : ",n);
	for(i=0;i<n;i++)
	{
		ch++;
		printf("%c ",ch);
	}
	return 0;
}
