#include <stdio.h>
/*
Name: Saurabh Tayde
Discription: 
	This source file contains a function to extract a specified number of bits from a given position in a number. The main function prompts
       	the user to input a number, the number of bits to extract, and the position from which to extract the bits. It then calls the function
       	and prints the result.
*/
int get_nbits_from_pos( int , int , int );	//function prototype for get_nbits_from_pos function that takes three integer arguments and return intgervalue
int main()					//the main function where program execution start
{
    int num , n , pos , res ;			//declaring variables as integer
    printf("Enter the number: ");		
    scanf("%d", &num);
    printf("Enter number of bits: ");
    scanf("%d", &n);
    printf("Enter the pos: ");
    scanf("%d", &pos);
    res = get_nbits_from_pos( num, n, pos );		//call the function and store the result in 'res' integer variable 
    printf("Result = %d\n", res);			//print the value stored in res variable
    return 0;
}
int get_nbits_from_pos(int num , int n , int pos )		//function to get 'n' bits from given position
{
    int mask = ( (1 << n) - 1 ) ;				//generate bitmask and stored the value in mask variable
    return ( num >> ( (pos + 1) - n ) ) & mask ;		// Extracts 'n' bits from position 'pos' in 'num' using bitwise right shift and bitwise AND with mask
}
