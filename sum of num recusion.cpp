#include<stdio.h>
int sum(int n);
int main()
{
	int i,n,total;
	printf("Enter the number:");
	scanf("%d",&n);
	total = sum(n);
		printf(" The sum is %d",total);
}
int sum(int n)
{
  if (n==0||n==1)
   return n;
  else
  return n + sum (n-1);
}
