#include <stdio.h>

// Function for Pattern 1: Triangle
void patternTriangle()
{
    int n, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

// Function for Pattern 2: Square
void patternSquare()
{
    int n, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

// Function for Pattern 3: Upside Down Triangle
void patternUpsideDownTriangle()
{
    int n, row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n - row +1; col++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

// Function for pattern 4: triangle with nums increasing
void triangleNumsIncrease()
{
	int n, row, col;
	printf("Enter the number of rows:");
	scanf("%d", &n);
	for (row=1;row<=n; row++)
	{
		for (col =1; col<=row; col++)
		{
			printf("%d", col);
		}
	    printf("\n");
	}
	
}
// function for  Pattern 5: Horizontal Pyramid
void horizontalPyramid()

{
	int n, row, col;
	printf("Enter the number of rows:");
	scanf("%d", &n);
	for (row=1;row<=(2*n)-1; row++)
	{
		if (row<=n)
	     	{
		      for (col =1; col<=row; col++)
		        { 
			            printf("*    ");
		        }
		    }
		else
		    {
		      for (col =1; col<= (2*n)-row; col++)
		        {
		        	   printf("*    ");
				}
			}
	  printf("\n");
    }
}
int main()
{
    // Call Pattern 1: Triangle
    printf("Pattern 1: Triangle\n");
    patternTriangle();
    
    // Call Pattern 2: Square
    printf("Pattern 2: Square\n");
    patternSquare();
    
    // Call Pattern 3: Upside Down Triangle
    printf("Pattern 3: Upside Down Triangle\n");
    patternUpsideDownTriangle();
    
    // Call Pattern 4: Triangle with nums increascing
    printf("Pattern 4: Triangle with numbers increasing");
    triangleNumsIncrease();
    
    // Call Pattern 5: Horizontal Pyramid
    printf("Pattern 5: Horizontal Pyramid");
    horizontalPyramid();
    return 0;
}

