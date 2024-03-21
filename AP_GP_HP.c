#include <stdio.h>
/*
Name: Saurabh Tayde
Description: Programme to generate AP(arithmetic progression), GP( Geometric progression ), HP(harmonic proression) series
Sample Input:  
Enter the First Number 'A': 2
Enter The Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Sample Output: 
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071429
*/
int main()			//the main function ehre the proran execution start
{
    int A, R, N, i;						//declaring variables as integer
    printf("Enter the First Number 'A': ");			//promt the user to enter first number 
    scanf("%d", &A);						//to get first integer number from the use
    printf("Enter The Common Difference / Ratio 'R': ");	//promt the user to enter the common difference value
    scanf("%d", &R);						//to get the common differece/ratio interger value 
    printf("Enter the number of terms 'N': ");			//promt the user to to enter number for total terms
    scanf("%d", &N);						//to get the inter value indicating total terms
    if ( N >= 1 )				//to check if the value of 'N' is greater than 1
    {
	int temp = A;				//to initialise the 'temp' integer variable with the value of variable 'A'
	printf("AP = ");
	for ( i = 1 ; i <= N ; i++ )		//this for loop iterates from 1 to N, printing the value of A for arithimetoc progression series
	{
	    printf("%d", A);			//print the current value of A
	    if (i < N)				//check if the value of 'i' less than value of 'N' 
	    {
		printf(", ");			//print the comma
	    }
	    A += R;				//increment A by R
	}
	printf("\n");				//print new line
	A = temp;				//to initialise the 'A' integer variable with the value of variable 'temp'
	printf("GP = ");
	for ( i = 1 ; i <= N ; i++ )		//this for loop iterates from 1 to N, printing the value of 'A' for geometric progression series	
	{
	    printf("%d", A);			//print the currenr value of 'A'
	    if (i < N)				//check if the value of 'i' less than value of 'N' 
	    {
		printf(", ");			//print the comma
	    }
	    A *= R;				//multiplying 'A' with 'R' variable and store the result in 'A' variable
	}
	printf("\n");				//print the new line

	A = temp;				//again initialising  variable 'A' with the value of'temp'

	//calculates the reciprocal of the integer variable A and stores it in the float variable res by doing type conversion integer to float for variable 'A' 
	float res =  1 /(float) A;		
	printf("HP = ");

	for ( i = 1 ; i <= N ; i++ )		//this for loop iterates from 1 to N, printing the value of 'A' for harmonic progression series
	{
	    printf("%f", res);	    	//print the current float value of 'res' variable 
	    if (i < N)				//check if the value of 'i' less than value of 'N' 
	    {
		printf(", ");			//print the comma
	    }
	    A += R ;				//increment 'A' by 'R'
	    res = 1 / ( (float) A ) ;		//this line converts the integer variable A into a float , then calculates the reciprocal
	}
	printf("\n");				//print the new line
    }
    else	
    {
	printf("Invalid input"); 		//if the value of variable 'N' is less than 1,it print error massage indicating invalid input
    }
    return 0;				//indicates successfull program exectution
}
