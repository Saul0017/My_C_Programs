#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to check if number is perfect or not
Sample Input: 28
Sample Output: Yes, entered number is perfect number
*/
int main()	 //main function where program execution begins
{
    int num,i, sum = 0;			//declare variable 'num','i',sum as integer and initializing variable sum by 0
    printf("Enter a number: ");		//prompt the user for input
    scanf("%d", &num);			//to read integer number from the user
    if ( num < 0 )			//to check if number is less than zero
    {
	printf("Error : Invalid Input, Enter only positive number\n");	//print the error massage if number is less than 0
    }
    else		 //else part perform operation for fibonacci series if value of variable num is greater than or equal to 0
    {
	for ( i = 1; i <= num - 1; i++ )	//loop iterates 1 to num-1 times to perform its operation
	{
	    if( num % i == 0 )		//to check if value of 'num' is divisible by 'i'th value with no reminder
	    {
		sum = sum + i;		//then add 'i'th value with 'sum' variable and store again in 'sum' variable
	    }
	}
	if ( sum == num )		//check if value of sum variable is equal to  value of num variable
	{
	    printf("Yes, entered number is perfect number\n");		//print this massage if value of sum variable is equal to  value of num variable
	}
	else
	{
	    printf("No, entered number is not a perfect number\n");	//else print this massage
	}
    }
    return 0;		    //indicates successful program execution
}
