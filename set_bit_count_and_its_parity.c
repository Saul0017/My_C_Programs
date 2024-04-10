#include <stdio.h>
/*
Name: Saurabh Tayde
Description: programme to count number of set bits in a given number and print parity
Sample Input: 17 
Sample Output: 
Enter the number : 17
Number of set bits = 2
Bit parity is Even
*/
int main()
{
    int num, i, count = 0 ;				// declaring variables
    printf("Enter the number : ");			// prompt the user for input
    scanf("%d", &num);					// to get the iblut from the user
    for ( i = 0 ; i <= 31 ; i++ )			// for loop in which i value iterates from 0 to 1
    {
	if ( ( num & (1 << i) ) )			// check if the i-th bit of num is set to 1
	{
	    count++ ;					//  then increment count by 1
	}
    }
    printf("Number of set bits = %d\n", count);		// print the count of set bits
    if ( ( count & 1 ) == 0 )				// check if the least significant bit (LSB) of 'count' is 0 
    {
	printf("Bit parity is Even\n");			//then print the massase indicating bit parity is even
    }
    else
    {
	printf("Bit parity is Odd\n");			//else print the massage indicating bit parity is odd
    }
    return 0;		//indicates successfull program execution
}
