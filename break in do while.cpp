#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		if (i==5)
		{
		  break;
	    }
	    printf("The value of i is %d\n",i);
     i++;
	}
	while  (i<10);
	return 0;
}
