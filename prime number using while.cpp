#include<stdio.h>
int main()
{
	int a,f=0,i=2;
	printf("Enter number:\n");
	scanf("%d",&a);
	while(i<a)
	{
		if (a%i==0)
		{
	       f=1;
	    }
		i++;
	}
	if (f==0)
	 printf("%d is a prime number",a);
	else 
	 printf("%d is not a prime number",a);
}
