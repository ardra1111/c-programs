//simple interest
#include<stdio.h>
int main()
{
	 float principle, rate, time, simple_interest=0;
	    printf("Enter the principle amount:\n");
	    scanf("%f",&principle);
	    printf("Enter the rate of inerest:\n");
	    scanf("%f", &rate);
	    printf("Enter the time taken:\n");
	    scanf("%f", &time);
	    simple_interest= float(principle*rate*time)/100;
        printf("simple interst is %f\n",simple_interest);
        return 0;
}
