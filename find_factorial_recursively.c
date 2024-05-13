#include <stdio.h>				//include the standard I/O library for printf and scanf
/*
Name: Saurabh Tayde
Description: Program to read num  and  find factorial of number using recursion only in main function
Sample Input: 5
Sample Output: 
Factorial of the given number is 120
*/
int main()					//the main funtion where program execution start
{
    static int num, count = 1, fact = 1;	//declaring variables as static integers and initialized variable 'count' and 'fact' to 1
    if( count == 1 )				
    {
	printf("Enter the value of N : ");	//prompt the user for input
	scanf("%d", &num );			//read the integer value from user and store it in 'num'
	count = 0;				//update count to 0 indicate that input has been received
	if( num < 0 )				//check if the value of 'num' is less the 0 or value is negative
	{
	    printf("Invalid Input\n");		//print the error indicating invalid input
	    return 1 ;				//Return non-zero to indicate an error.
	}
    }
    if( num == 0 )				//to check if the value of 'num' is equal to 0
    {
	printf("Factorial of the given number is %d\n", fact );			//print the factorial result which is the value stored in 'fact' when 'num' equal to 0
    }
    else
    {
	fact = fact * num-- ;			//else calculate the factorial by multiplying 'fact' with 'num' and decrementing 'num'.
	main();					//recursively call the main() function to cintinue factorial calculation
    }
    return 0;
}
