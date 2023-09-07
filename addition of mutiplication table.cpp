#include<stdio.h>
int main()
{
	int m=1,n,sum,i=1;
	printf("Enter the number for which the multiplication table has to be displayed:\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	 {
	 	m= i*n;
	 	printf("%d X %d = %d\n",i,n,m);
	 	sum= m+sum;
	 }
	printf("The sum of the products of the multiplication table is: %d\n",sum);
	return 0;
}
