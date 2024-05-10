#include <stdio.h>
/*
Name: Saurabh Tayde
Date: 8-10-2023
Description:  program to make islower() function i.e. to check the charcter is lowercase aplhabet or not
Sample Input: 
Enter the character: a
Sample Output: 
Entered character is lowercase alphabet
*/
int my_islower( int );			//function prototype my_islower function that takes one integer arguments and return intger value
int main()				//the main function where program executuion start
{
    char lower ;			 //declaring variable as character
    printf("Enter the character: " );
    scanf("%c", &lower );
    int ret = my_islower( lower );			//calling function my_islower by passing character argument 'lower' and store return value of function in 'ret
    if ( ret == 1 )					//to check if the 'ret' value is equal to 1
    {
	printf("Eneterd character is lowercase alphabet\n");			//if condition is true print the masssage indicating character is lowercase alphabet
    }
    else
    {
	printf("Entered character is not lowercase alphabet\n");		//else print character is not lowercase alphabet
    }
    return 0 ;
}
int my_islower( int lower )				 //function my_islower() to checks if a given integer represents a lowercase alphabet.
{
    if ( lower >= 'a' && lower <= 'z' )			//to check if value  of 'lower' is between a to z
    {
	return 1 ;					// if condion is true reterns 1
    }
    else
    {
	return 0 ;					//else return 0
    }
}
