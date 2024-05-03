#include <stdio.h>
/*
Name: Saurabh Tayde
Description: Program to get 'n' bits of a given number using function  
Sample Input: 
Enter the number: 15
Enter the number of bits: 2
Sample Output: 
Result = 3
*/
int get_nbits(int , int) ;	//declaring function
int main()			//the main function where program execution start
{
    int num, n, res = 0 ;			//declaring variablea as integer;
    printf("Enter the number: ") ;		//prompt the user to enter the number
    scanf("%d", &num ) ;			//read integer value for variable num from user
    printf("Enter the number of bits: ") ;
    scanf("%d", &n ) ;				//read the integer vlue indicating how many bits to be get
    res = get_nbits( num , n ) ;		//call the get_nbits function and store the result in 'res'	
    printf("Result = %d\n", res ) ;		//print the result
    return 0 ;
}
int get_nbits( int num , int n )		// Function to get 'n' bits from the integer 'num'
{
    return ( num & ( ( 1 << n) - 1) ) ;		//the expression (1 << n) - 1 generates a bitmask with 'n' 1s,Using a bitwise AND operation to get n bits
}
