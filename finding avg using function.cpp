#include<stdio.h>
float avg(int a,int b ,int c);
int main()
{
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	float average;
	average= avg(a,b,c);
	printf("The average of three numbers is %f", average);
	return 0;
}
float avg (int x, int y, int z)
{
	float n,m;
	n= (float) x +(float) y + (float) z;
	m= (float)n/(float)3;
	return m;
}
