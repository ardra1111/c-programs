#include<stdio.h>
int sum(int,int);
int main ()
{
	int a,b,c;
	  printf("Enter the first number:\n");
	  scanf("%d", &a);
	  printf("Enter the second number:\n");
	  scanf("%d", &b);
	  c= sum(a,b);
      printf("The sum is: %d\n",c);
    return 0;
}
int sum(int x,int y)
{
int total;
total = x+y;
return total;
}
