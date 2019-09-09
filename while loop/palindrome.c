#include<stdio.h>
int main()
{
	int n,n1,rev=0,i;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	n1=n; //to store the original value of n because 
	while(n!=0)
	{
	rev=rev*10+n%10; 
	n=n/10;
	}//after while loop,n becomes 0. you can add a print statement here to print the value of n
	if(rev!=n1)
		printf("%d is not a palindrome",n1);
	else
		printf("%d is a palindrome",n1);
	return 0;
}



/*  	rev=0  
		rev=rev*10*n%10
		eg : n=234
			iteration 1 : 
			n%10 = 4
			rev=rev*10+4
			therefore rev=0*10+4=	4
			n/10=1234/10 = 23
			iteration 2 :
			n!=0 is true
			therefore rev=rev*10+n%10 
			rev=4*10+3=40+3= 43
			n=n/10 = 23/10 = 2
			iteration 3 :
			n!=0 is true 
			therefore rev=rev*10+n%10=43*10+2=430+2= 	432
			n=n/10 = 2/10 = 0
			iteration 4 :
			n!=0 is not true because 0 is equal to 0
			therefore condition failed
			therefore stop loop
			*/




		