#include<stdio.h>
int main()
{
	int n,i=1,m;
	printf("Enter the number for which the multiplication table has to be displayed:\n");
	scanf("%d",&n);
	for(i;i<=10;i++)
	{
	  m=i*n;
	  printf("%d X %d = %d\n",i,n,m);
    }
return 0;  
}
