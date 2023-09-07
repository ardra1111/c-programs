#include<stdio.h>
int factos(int a);
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("The factorial of the number %d is %d",a, factos(a));
	return 0;
}

int factos (int x)
{
	printf(" calling factorial (%d)\n",x);
	if (x==1|| x==0)
	  {
	  	return 1;
	  }
    else {
    	return x*factos(x-1);
	}
}
	
