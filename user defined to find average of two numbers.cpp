#include<stdio.h>
float avg (int a, int b);
int main ()
{
	int x,y;
	float z;
	z= avg(x,y);
	printf("The average of two numbers is %f", z);
}

float avg(int a,int b)
{
	float average,sum;
	scanf("%d %d",&a,&b);
	sum= (float )(a+ b);
	average = (float) (sum/ 2);
	return average;
}
