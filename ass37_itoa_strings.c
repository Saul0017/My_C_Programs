#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to implement itoa function which convert integer  into a string and store the string
Sample Input: 
Enter the number : 1234
Sample Output: 
Integer to string is 1234
*/
void my_itoa( int, char [] );			// function prototype for my_itoa which takes one integer and one char array as arguments
int main()
{
    int num = 0 ;				//declare an integer variable 'num' and initialize it to 0
    char str[10];				//declare a character array 'str' with a maximum size of 10
    printf("Enter the number : ");		//prompt the user to enter a number
    scanf("%d", &num);				//read an integer from the user and store it in 'num'
    my_itoa(num, str);				//call the my_itoa function to convert the integer to a string
    printf("Integer to string is %s\n", str);	//print the converted string
    return 0 ;					//indicates sucessful execution
}
void my_itoa( int  num , char str[] )		//my_itoa function to convert integer value to string 
{
    int i = 0 ;						//initialize an index variable 'i' for the character array 'str'
    if (num != 0 )					//to check if num is not equal to 0
    {
	int is_negative = 0 ;				//initialize a flag 'is_negative' by 0 to check if the number is negative
	if( num < 0 )					//to check if the value of num is less than 0
	{
	    is_negative = 1;				//set the flag to 1 if the number is negative
	    num = -num;					//make the number positive
	}
	while( num > 0 )				//while loop iterates till num is greater than 0 to convert the integer value in 'num' to a string
	{
	    int digit = num % 10 ;			//extract the last digit of 'num'
	    str[ i++ ] = digit + '0' ;			//convert the digit to a character and store it in 'str'
	    num = num / 10 ;				//remove the last digit from 'num'
	}
	if ( is_negative == 1 )	
	{
	    str[ i++ ] = '-' ;				// the number was negative, add a '-' sign at the end of the string
	}
	str[ i ] = '\0' ;				//add null at current ith index 'i' to terminate the string
	int temp, ind2 ;		      		//declaring variables type as integer
	for( int j = 0; j < i / 2 ; j++ )             	//loop iterates from 0 to i/2 for string reversal operation, here 'i' is length of th string 
	{
	    ind2 = i - j - 1  ;				//calculate the index of the character to swap with.
	    temp = str[ j ] ;                           //store the character in string str at position 'j' in 'temp'
	    str[ j ] = str[ ind2 ] ;                    //Swap the character at position 'j' with the one at 'ind2'
	    str[ ind2 ] = temp ;                        //place the original character from 'temp' at the 'ind2' position
	}
    }
    else
    {
	str[ i++ ] = '0' ;				//if the input number is 0, simply add '0' to the string
	str[i] = '\0' ;					//add null at current ith index 'i' to terminate the string
    }
}
