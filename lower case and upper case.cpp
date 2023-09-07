#include<stdio.h>
#include<ctype.h>
int main()
{
	char letter;
	printf("Enter the letter\n");
	scanf("%c",&letter);
	if ( isupper(letter))
       {
	 	     printf("It is a upper case letter");
       }
        else if ( islower (letter))
        {
             printf("It is lower case");
        }
	    else 
	   {
	          printf("INVALID CHARACTER :(");
       }
	return 0;
}
