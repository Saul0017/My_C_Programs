#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to check if number is positive/negative odd,or positive/negative even.
Sample Input: 4
Sample Output: 4 is positive even number
*/
int main()				//main function where program execution begins 
{
    int num;			//declare variable num as integer
    printf("Enter the value of 'n' : ");					//prompt the user for input
    scanf("%d", &num);										//to read integer number from the user
    if ( num == 0 )											//to check if the value of variable num is equal to zero.
    {
	printf("%d is neither odd nor even\n", num);		//display a massage indicating that numbr is niether odd nor even
    }
    else
    {
	if( num > 0 )				//to check if the number is greater than 0
	{
	    if( num % 2 == 0 )		//to check if the number is even
	    {
		printf("%d is positive even number\n", num);	//if the number is positive even print the number with massage
	    }
	    else
	    {
		printf("%d is positive odd number\n", num);		//if the number is odd print the number with massage
	    }
	}
	else
	{
	    if( num % 2 == 0 )		//if the number is less than 0 then it check whether the number is even
	    {
		printf("%d is negative even number\n", num);	//if the number is negative even, print the number with massage 
	    }
	    else
	    {
		printf("%d is negative odd number\n", num);		//if the number is negative odd,print the number with massage
	    }
	}
    }
}
