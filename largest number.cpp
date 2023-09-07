#include<stdio.h>
int main()
{
	int a, b, c,d;
	printf("Enter the first nnumber:\n");
	scanf("%d",&a);
	printf("Enter  the second number:\n");
	scanf("%d",&b);
	printf("Enter the third number:\n");
	scanf("%d",&c);
	printf("Enter the fourth number:\n");
	scanf("%d",&d);
   if (a>b && a>c && a>d)
      {
    	printf("%d is the largest number\n",a);
      }
   else if (b>a && b>c && b>d)
      {
    	printf("%d is the largest number\n",b);
      }
   else if (c>a && c>b && c>d)
      {
    	printf("%d is the largest number\n",c);
      }    
   else if (d>a && d>c && d>a)
      {  
    	printf("%d is the largest number\n",d);
      }
   return 0;
}
