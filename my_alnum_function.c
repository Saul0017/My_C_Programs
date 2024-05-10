#include <stdio.h>
/*
Name: Saurabh Tayde
Date: 8-1-2023
Description: program to make isalnum() function i.e. to check the charcter is alphanumeric or not
Sample Input: 
Enter the character: a
Sample Output: 
The character 'A' is an alnum character
*/
int my_alnum( int);		//function prototype my_islower function that takes one integer arguments and return intger value
int main()
{
    char alnum;				 //declaring variable as character
    printf("Enter the character: " );
    scanf("%c", &alnum );
    int ret = my_alnum( alnum );			//calling function my_isalnum by passing character argument 'alnum' and store return value of function in 'ret
    if( ret == 1 )					////to check if the 'ret' value is equal to 1
    {
	printf("The character '%c' is an alnum character\n", alnum);		//if condition is true print the masssage indicating character is alphanumeric
    }
    else
    {
	printf("The character '%c' is not an alnum character\n", alnum);	//else print character is not alphanumeric
    }
    return 0 ;
}
int my_alnum( int alnum)					// //function my_isalnum() to checks if a given integer represents a alphanumeric character.
{
    if ( alnum >= 'A' && alnum <= 'Z' || alnum >= 'a' && alnum <= 'z'  || alnum >= '0' && alnum <= '9' )	 //to check if value of 'alnum' is between [0-9] or [a-f] or [A-Z]
    {
	return 1 ;			// if condion is true returns 1
    }
    else
    {
	return 0;			 //else return 0
    }
}
