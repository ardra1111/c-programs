#include<stdio.h>
int main()
{
	int sum=0,i=1;
	for(i=1;i<11;i++)
	  {
	  	sum= i+sum;
      }
    printf("The sum of first 10 natural number: %d\n",sum);
	return 0;
}
