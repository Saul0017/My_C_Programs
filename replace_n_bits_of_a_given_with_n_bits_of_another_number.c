#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to replace 'n' bits of a given with 'n' bits of another number using function
Sample Input: 
Enter the number: 10
Enter number of bits: 3
Enter the value: 12
Sample Output: 
Result = 12
*/
int replace_nbits( int , int , int );	//function prototype for replace_nbits function that takes three integer arguments and return intgervalue
int main()					//the main function where program execution start
{
    int num , n , val , res = 0;		//declaring variables as integer and initialising res variable with 0
    printf("Enter the number: ");		
    scanf("%d", &num);
    printf("Enter number of bits: ");
    scanf("%d", &n);
    printf("Enter the value: ");
    scanf("%d", &val);
    res = replace_nbits( num, n, val );		//call the function and store the result in res integer variable 
    printf("Result = %d\n", res);		//print the value stored in res variable
    return 0;
}
int replace_nbits(int num , int n , int val )		//function to replace 'n' bits in an integer 'num' with 'n' bits from another integer 'val'
{
    int cleared_bits = num & ( ~( ( 1 << n ) - 1) );	//clear the 'n' bits from 'num' that will be replaced
    int fetched_bits = val &  ( 1 << n ) - 1;		//fech the 'n' bits from  'val'
    return cleared_bits | fetched_bits ;		//combine the cleared 'n' bits from 'num' with the 'n' bits from 'val' and returns the its resul value
}
