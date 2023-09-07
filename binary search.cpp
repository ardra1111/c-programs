#include<stdio.h>
int main()
{
	 int arr[200];
	 int i,l,r,mid,val,found,size;
	 printf("Enter the number of elements in the array:");
	 scanf("%d",&size);
	 printf("Enter all the %d elements one by one:\n",size);
	 for (i=0;i<size;i++)
	    {
	    	scanf("%d", &arr[i]);
		}
	printf("Enter the number you want to find:");
	scanf("%d",&val);
	l=0;
	r=size-1;
	mid=(l+r)/2;
	while(l<=r)
	   {
	   	   if (arr[mid]== val)
	   	   {
	   	     printf("The number %d found at index %d",val,mid+1);
	        break;
	       }
	      else if (arr[mid]<val)
            {
		        l=mid+1;
	   	    }
		   else if( arr[mid]> val)
		      {
                 r=mid=1;
              }
		   else
		     printf("The element is not there in this array");	   
	   }
}
