#include<stdio.h>
int main(void)
{
    int a;
       printf("Enter your marks out of 100 \n");
       scanf("%d",&a);
    switch(a/10)
      {
	   case 10:
	   case 9:
	     printf("Your grade is A\n");
	     break;
	   case 8:
	   	 printf("Your grade is B\n");
	   	 break;
	   case 7:
	     printf("Your grade is C\n");
	     break;
	   case 6:
	     printf("Your grade is D\n");
	     break;
	   case 5:
	     printf("Your grade is E\n");
	     break;
	   default:
	   	 printf("Grade is F do better next time\n");
	   	 break;
	   }
     return 0;
}
  
