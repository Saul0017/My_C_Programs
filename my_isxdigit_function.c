#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to make isxdigit() function i.e. to check the charcter is hexadecimal or not
Sample Input: 
Enter the character: a
Sample Output: 
The character 'a' is hexadecimal digit
*/
int my_isxdigit( int );			//function prototype my_isxdigit function that takes one integer arguments and return intger value
int main()				//the main function where program executuion start
{
    char xdigit ;			//declaring variable as character
    printf("Enter the character: " );
    scanf("%c", &xdigit );
    int ret = my_isxdigit( xdigit );		//calling function my_isxdigit by passing character argument xdigit and store return value of function in 'ret
    if ( ret == 1 )							//to check if the 'ret' value is equal to 1
    {
	printf("The character '%c' is a hexadecimal digit\n", xdigit);		//if condition is true print the masssage indicating character is hexadecimal
    }
    else
    {
	printf("The character '%c' is not a hexadecimal digit\n", xdigit);	//else print character is not hexadecimal digit
    }
    return 0 ;
}
int my_isxdigit( int xdigit )							//function my_isxdigit() to checks if a given integer represents a hexadecimal digit.
{
    if ( xdigit >= '0' && xdigit <= '9' || xdigit >= 'a' && xdigit <= 'f' || xdigit >= 'A' && xdigit <= 'F' )		//to check if xdigit is between [0-9] or [a-f] or [A-F]
    {
	return 1 ;		// if condion is true reterns 1
    }
    else
    {
	return 0;		//else return 0
    }
}
