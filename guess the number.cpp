#include<stdio.h>
#include<cstdlib>
int main()
{
	int a,b,i=0;
	a=rand();
	printf("You have to guess a number, hints will be given :) start guessing ;)\n");
	printf("Guess the number:\n");
	scanf("%d",&b);
	if (b>a)
	    {
	    printf("Guess a smaller number please\n");
        }
	if (b<a)
	    {
	   	printf(" Nope! Guess a larger number\n");
	    }
	if (b==a)
	   {
	   	printf(" Yayyyyyyy Congratulations! You guessed the correct number :)");
	   	printf("The correct answer is %d\n",a);
       }
    return 0;	 
}
