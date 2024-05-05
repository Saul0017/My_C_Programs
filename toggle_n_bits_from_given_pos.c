#include <stdio.h>
/*
Description:  Program to toggle 'n' bits from given position of a number
*/
int toggle_nbits_from_pos( int , int , int );	//function prototype for toggle_nbits_from_pos function that takes three integer arguments and return integer value
int main()					//the main function where program execution start
{
    int num , n , pos , res ;			//declaring variables as integer
    printf("Enter the number: ");		
    scanf("%d", &num);
    printf("Enter number of bits: ");
    scanf("%d", &n);
    printf("Enter the pos: ");
    scanf("%d", &pos);
    res = toggle_nbits_from_pos( num, n, pos );		//call the function and store the result in 'res' integer variable 
    printf("Result = %d\n", res);			//print the value stored in res variable
    return 0;
}
int toggle_nbits_from_pos(int num , int n , int pos )		//function to toggle 'n' bits from given position
{
    int mask = ( (1 << n) - 1 ) << ( (pos + 1) - n ) ;		//generate bitmask and stored the value in mask variable
    return num ^ mask ;					//bitwise XOR operation with 'mask' to toggle 'n' bits from the specified position 'pos' and return the result
}
