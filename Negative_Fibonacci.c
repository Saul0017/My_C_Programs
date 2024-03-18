#include <stdio.h>
/*
Name: Saurabh Tayde
Description: proramme to generate negative Fibonacci numbers 
Sample Input: -8
Sample Output: 0 1 -1 2 -3 5 -8
*/
int main()
{
    int num , first = 0 , second = 1 , next = 0;	//declare variables as intager and initializing first, second and next variable by 0, 1, 0 respectively.
    printf("Enter a number : ");		 //prompt the user for the input
    scanf("%d", &num);				//to get integer number from the user
    if( num <= 0 )				//to check if the value of 'num' variable is less than 0
    {
	// Generate and print Fibonacci series up to the absolute value of the input number
	while ( next >= num && next <= -(num))
	{
	    printf("%d ", next);		//print the value of 'next' variable
	    // Update Fibonacci sequence values
	    first = second;			//assign the value of 'second' to 'first'
	    second = next;			//assign the vakue of'next' 'second'
	    next = first - second;		//subtract 'second' from 'first'
	}
	printf("\n");				//print new line
    }
    else
    {
	printf("Invalid input\n");		//if the input value is greater than 0, it prints the error indicating invalid input
    }
    return 0;
}
