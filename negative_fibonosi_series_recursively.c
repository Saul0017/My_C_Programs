#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to read limit and generate negative fibbonacci numbers series upto limit using recursion
Sample Input: -10
Sample Output: 
0, 1, -1, 2, -3, 5, -8
*/
void negative_fibonacci( int, int, int, int );			//prototype for function 'negative_fibonacci' which takes four intrger arguments 
int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if ( limit <= 0 )					//to check if the value of 'limit' less than or equal to 0 
    {
	negative_fibonacci( limit, 0, 1, 0 );		//call the negative_fibonacci function to print the negative Fibonacci series
    }
    else
    {
	printf("Invalid input\n");			//print error massage indicating invalid input if entered value is negative 
    }
    return 0 ;
}
void negative_fibonacci( int limit , int first, int second, int next )		//recursive function to print the negative Fibonacci series up to the given limit
{
    if ( next == 0 )			//to check if the value of variable'next' is equals 0
    {
	printf("%d", next );		//print only value of variable 'next', when condition is true
    }
    else
    {
	printf(", %d", next );		//else prints comma space and value of 'next'
    }
    first = second ;				//value in variable 'second' stored in 'first'
    second = next ;				//value in variable 'next' stored in 'second'
    next = first - second ;			//subtract  value of variables 'second' from 'first' and store the result in 'next' variable
    if ( next >= limit && next <= -limit )			//to check if the value in variable 'next' is grater then or equal to value in variable 'limit' and 'next' is less than or equal to negation of  value of'limit'
    {
	negative_fibonacci( limit, first, second, next );		//call the function 'negative_fibonacci' recursively
    }
    else
    {
	printf("\n");						// print a new line
    }
}
