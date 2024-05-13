#include <stdio.h>
/*
Name: Saurabh Tayde
Date: 19-10-2023 
Description: program to read limit and generate positive fibbonacci numbers serias upto limit using recursion
Sample Input: 21
Sample Output: 
0, 1, 1, 2, 3, 5, 8, 13, 21
*/
void positive_fibonacci( int, int, int, int );			//prototype for function 'positive_fibonacci' which takes four intrger arguments 
int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if ( limit >= 0 )					//to check if the value of 'limit' greater than or equals to 0 
    {
	positive_fibonacci( limit, 0, 1, 0 );		//call the positive_fibonacci function to print the Fibonacci series
    }
    else
    {
	printf("Invalid input\n");			//print error massage indicating invalid input if entered value is negative 
    }
    return 0 ;
}
void positive_fibonacci( int limit , int first, int second, int next )		//recursive function to print the positive Fibonacci series up to the given limit
{
    if ( next == 0 )			//to check if the value of variable'next' is equals 0
    {
	printf("%d", next );		//print only value of variable 'next', when condition is true
    }
    else
    {
	printf(", %d", next );		//else prints comma space  and value of 'next'
    }
    first = second ;			//value in variable 'second' stored in 'first'
    second = next ;			//value in variable 'next' stored in 'second'
    next = first + second ;		//add variables 'first' and 'second' and store the result in 'next' variable
    if ( next <= limit )		//to check if the value in variable 'next' is less then or equal to value in variable 'limit'
    {
	positive_fibonacci( limit, first, second, next );			//call the function 'positive_fibonacci' recursively
    }
    else
    {
	printf("\n");			// print a new line
    }
}
