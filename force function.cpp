#include<stdio.h>
float force (float m);
int main()
{
	 float m,result;
	 printf("Enter the mass:\n");
	 scanf("%f",&m);
	 result = force(m);
	 printf("The force is %f",result);
	 return 0;
}
float force(float x)
{
	float ans;
	ans= (float)x * (float)9.8;
	return ans;
}
