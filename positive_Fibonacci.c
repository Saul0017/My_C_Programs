#include <stdio.h>
/*
Name: Saurabh Tayde
Description: Program to generate positive Fibonacci numbers upto given number. 
Sample Input: 8
Sample Output: 0 1 1 2 3 5 8
*/
int main()		//main function where program execution begins
{
    int num;		//declare variable 'num' as integer
    printf("Enter a number: ");			//prompt the user for input
    scanf("%d", &num);				//to read integer number from the user
    if( num < 0 )				//to check if number is less than zero
    {
	printf("Invalid input.\n");		//print the error massage if number less than zero
    }
    else		//else part perform operation for fibonacci series if value of variable num is greater than or equal to 0
    {
	int first=0, second=1, next=0;		//initializing integer variables
	while( next <= num )			//continue the loop while the variable 'next' value is less than or equal to value of variable 'num'
	{
	    printf("%d ", next);		//print the interger value of variable 'next'
	    first = second;			//storing value of variable 'second' into variable 'first'
	    second = next;			//storing value of variable 'next' into variable 'second'
	    next = first + second;		//performing addition of variable 'first' and 'second',storing the result in 'next' variable 
	}
	printf("\n");				//print the new line
	return 0;				//indicates successful program execution
    }
}
