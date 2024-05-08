#include <stdio.h>
/*
Name: Saurabh Tayde
Description:  perform a circular left shift operation on an integer 'num' by 'n' bits using function 
Sample Input: 
Enter num: 15
Enter n : 2
Sample Output:
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 0 0
*/
int circuler_left( int , int );			//function prototype circuler_left function that takes two integer arguments and return intger value
int print_bits( int );				//function prototype print_bits function that takes one integer arguments and return intger value
int main()
{
    int num , n , res ;				//declaring variables as integer
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter n : ");
    scanf("%d", &n);
    res = circuler_left( num , n );		//callin circuler_left function with passing two argument 'num' and 'n' and store return value of function in 'res' variable
    print_bits( res );				//caling print_bits function with passing one argument 'res'
    return 0;
}
int circuler_left( int num , int n )				//function to perform a circular left shift operation on an integer 'num' by 'n' bits
{
    int clear_nbits = num << n ;						//perform a left shift of 'num' by 'n' bits to clear the 'n' leftmost bits
    int get_nbits = num & ( ( 1 << n ) - 1  << sizeof(int) * 8 - n ) ;		//get the most significant 'n' bits from 'num'
    return clear_nbits | ( (unsigned) get_nbits >> sizeof(int) * 8 - n ) ;	//merge the clear bits shifted to the left (clear_nbits) and the extracted bits (get_nbits) shifted to the right to perform the circular left shift.
}
int print_bits( int num )			//function to print the number in binary
{
    printf("Result in Binary: ");		
    for ( int i = 31 ; i >= 0 ; i-- )		//loop through each bit in the number from left to right
    {
	int get_bit = ( num >> i ) & 1 ;	//shift the 'num' to the right by 'i'-th positions and bitwise AND it with 1
	printf("%d ", get_bit );		//print the current bit value of that position
    }
    printf("\n");				//print new line
}
