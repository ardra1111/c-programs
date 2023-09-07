#include<stdio.h>
int main()
{
	int n, f=0, i=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     	if (n%i==0)
     	 {
		 f=1;
	     }
    }
    if (f==0)
     printf("it is prime");
    else
     printf("it is not prime");
	return 0;
}
