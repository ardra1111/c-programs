#include<stdio.h>
int main()
{
	float salary, tax;
	printf("Enter your salary:\n");
	scanf("%f",&salary);
	if (salary >= 250000 && salary<500000)
	 {
	 	tax= float(0.05*salary);
		printf("The amount you have to pay as income tax is %f\n", tax);
	 }
	if (salary >= 500000 && salary<1000000)
	 {
	 	tax=float(0.2*salary);
		printf("The amount you have to pay as income tax is %f\n", tax);
	 }
	if (salary >= 1000000)
	 {
	 	tax=(0.3*salary);
		printf("The amount you have to pay as income tax is %f\n", tax);
	 }
	if (salary < 250000)
	 {
		printf(" You don't have to pay income tax, earn more ;) \n");
	 }
}
