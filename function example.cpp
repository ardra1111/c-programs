#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a,b,c;
	a=8;
	b=2;
	c=sum(a,b);
	printf("The sum is %d",c);
}
 sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
