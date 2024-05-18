#include <stdio.h>
/*
Name: Saurabh Tayde
Description: Program to read string from the user and to implement atoi function which converts numeric string to integer
Sample Input: 
Enter a numeric string: 12345
Sample Output:
String to integer is 12345
*/
int my_atoi(const char []);				//Function prototype for the 'my_atoi' function which takes base address of char array nd return integer value
int main()
{
    char str[100];					//declare char array id=f size 100 to store the input string
    printf("Enter a numeric string: ");
    scanf("%s", str);					//read the string from the user and store it in char array str
    int ret = my_atoi(str) ;				//call the 'my_atoi' function to convert the string to an integer
    printf("String to integer is %d\n", ret );		//print the converted integer
}
int my_atoi( const char str[] )				//'my_atoi' function to convert the numeric string to an integer
{
    int num, res = 0, i = 0, flag = 0 ;		//declare variables as integer and initialize variables int_val, i, and  flag with 0;
    if( str[ 0 ] == '+' )				//to check if the positive sign at the beginning (0'th index ) of the string
    {
	i = 1 ;						//assign 1 in 'i' variable when sign is positive
    }
    else if( str[ 0 ] == '-' )				//to check if the negative sign at the beginning (0'th index ) of the string
    {
	i = 1 ;						//assign 1 in variable i when sign is negative
	flag = 1 ;					//and assign 1 in 'flag' variable
    }
    while( str[ i ] >= '0' && str[ i ] <= '9' )		//loop through the string and convert characters to integers until a non-digit character is encountered
    {
	num = str[ i ] - '0' ;				//convert character to integer
	res = res * 10 + num ;				//build the result by multiplying the current result by 10 and adding the new digit
	i++ ;						//move to the next character in the string
    }
    if( flag == 1 )					//adjust the result based on the sign 'flag'
    {
	return res * -1 ; 				//return the negative integer if the sign flag is set to 1
    }
    else
    {
	return res ;					//return the positive integer if the sign flag is set to 1
    }
}
