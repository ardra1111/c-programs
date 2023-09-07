#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number till you want to find the fibonacii seriers:\n");
	scanf("%d",&n);
	int n3,n1=0;
	int n2 =1;
	i=2;
	printf("%d \n", n1);
	printf("%d\n",n2);
	while(i<=n)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
		i++;
	}
}
