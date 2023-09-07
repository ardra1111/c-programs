#include<stdio.h>
float farh (float c);
int main()
{
	float c,temprature;
	printf("Enter the temprature in celcius:");
	scanf("%f", &c);
	temprature = farh(c);
	printf("The temprature in franheit is %f", temprature);
	return 0;
}
float farh (float n)
{
	float f,d,m; 
	d=(float) 9 / (float) 5;
	m= (float) n * (float)d;
	f = (float) m +32;
	return f;
}
