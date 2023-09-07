#include<stdio.h>
int fibonac (int n);
int main ()
{
	int n, i;
	printf("Enter the number :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d  ", fibonac(i));
	}
	return 0;
}

int fibonac (int i)
{
	if (i<=1)
	{
	   return i;
    }
    else
    {
       return fibonac(i-1) + fibonac(i-2);
    }
}
