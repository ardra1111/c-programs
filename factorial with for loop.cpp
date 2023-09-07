#include<stdio.h>
int main()
{
	int n,f=0,i;
	 printf("Enter the number to check if it is prime or not:\n");
	 scanf("%d",&n);
     for (i=2;i<n;i++)
	   {
	   	 if (n%i==0)
	   	  f=1;
	   }
	if (f==0)
	 {
	 printf("%d is a prime number\n",n);
     }   
	else
	{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}
