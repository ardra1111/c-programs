#include<stdio.h>
int main()
{
	int f=1, i=1,n;
	printf("Enter thr number:");
	scanf("%d",&n);
	do
	  { 
	  f=f*i;
      i++;
      }
    while (i<=n);
    printf("The factoreal is %d\n",f);  
	return 0; 
}
