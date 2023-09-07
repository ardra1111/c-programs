/* Write a program to check if the student has passed or failed the test
1) Need at least 40% in all subjects together
2) Need at least 33 out of 100 in each subject */
#include<stdio.h>
int main()
{
	 float math, physics, computer, total;
	 printf("Enter the marks you scored out of 100 in Math:\n");
	 scanf("%f",&math);
	 printf("Enter the marks you scored out of 100 in Physics:\n");
	 scanf("%f",&physics);
	 printf("Enter the marks you scoredout of 100 in computer:\n");
	 scanf("%f",&computer);
	 total = float(((math/300) + (physics/300)+ (computer/300))*100);
	 printf("Your total percentage is %f \n",total);
	if (total >=40 && math >=33 && computer >=33 && physics >=33)
	  {
	        printf("Congrats :) You have passed the exam\n");
      } 
    if ( total<40 || math<33 || computer<33 || physics<33)
	 {
		printf("Sorry :( You failed the exam\n");
     }
	 return 0; 
}
