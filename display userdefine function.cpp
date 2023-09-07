#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
	int a;
	goodmorning();
	return 0;
}

void goodmorning ()
 {  
    printf("Good Morning\n");
    goodafternoon();
     goodnight();
 }
void goodafternoon()
 {
 	printf("Good Afternoon\n");
 }
void goodnight()
{
	printf("Good Night\n");
}
