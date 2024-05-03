#include <stdio.h>
/*
Name: Saurabh Tayde
Description: Program to find the median of two unsorted arrays
Sample Input:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Sample Output: 
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
*/
int main()
{
    int M , N;	
    printf("Enter the 'n' value for Array A: ") ;
    scanf("%d", &M ) ;
    int arrA[ M ] ;						// Declare an integer array named arrA with M elements
    printf("Enter the 'n' value for Array B: ") ;
    scanf("%d", &N ) ;
    int arrB[ N ] ;						// Declare an integer array named arrB with N elements
    printf("Enter the elements one by one for Array A: ") ;	//prompt the user to enter the elments for arrA array
    for ( int i = 0 ; i < M ; i++ )			//for loop which iterartes from 0 to M - 1 , here M is lenth of array.
    {
	scanf("%d", &arrA[i]) ;					//store integer element in the i-th index of arrA
    }
    printf("Enter the elements one by one for Array B: ") ;	//prompt the user to enter the elments for arrB array
    for (int i = 0 ; i < N ; i++ )			//for loop which iterartes from 0 to N - 1 , here N is lenth of array.
    {
	scanf("%d", &arrB[i]) ;					//store integer element in the i-th index of arrB
    }
    for ( int i = 0 ; i <= (M - 2) ; i++ )			// Outer loop iterates through each element from the first to the second-to-last element
    {
	for ( int j = 0 ; j < ( M - i - 1 ) ; j++ )		// Inner loop iterates through each pair of adjacent elements in the array
	{
	    if ( arrA[ j ] > arrA[ j + 1 ] )			// to Check if the current element is greater than the next element
	    {							// If true, swap the two elements using a temporary variable (temp)
		int temp = arrA[ j ] ;				//storing j-th index element in temp variable
		arrA[ j ] = arrA[ j + 1 ] ;			//storing next element from j-th index at the j-th index of array arrA
		arrA[ j + 1 ] = temp ;				//Replace the next element with the value stored in the temporary variable.
	    }
	}
    }
    for ( int s = 0 ; s <= (N - 2) ; s++ )
    {
	for ( int t = 0 ; t < (N - s - 1) ; t++ )
	{
	    if ( arrB[ t ] > arrB[ t + 1 ] )
	    {
		int temp = arrB[ t ] ;
		arrB[ t ] = arrB[ t + 1 ] ;
		arrB[ t + 1 ] = temp ;
	    }
	}
    }
    for( int i = 0 ; i <= M - 1 ; i++ )			//loop iterates from 0 to value of M - 1
    {
	printf("%d ", arrA[i] ) ;			//print the sorted elements of array arrA
    }
    printf("\n") ;					//print new line
    for( int i = 0 ; i <= N - 1 ; i++ )
    {
	printf("%d ", arrB[i] ) ;			//print the sorted elements of array arrB
    }
    float median1 , median2, final_median ;		//declaring type of variables as float ;
    if ( M % 2 == 0 )					//check if M is even or not
    {
	median1 = ( ( arrA[ M / 2 ] + arrA[ ( M / 2) - 1 ] ) / 2.0 ) ;	//Calculate the median of array arrA as the average of two middle elements (if M is even).		
    }
    else
    {
	median1 =arrA[ M / 2 ] ;				//Calculate the median of arrA, which is the middle element when M is odd.
    }
    printf("\nMedian of array1 : %g \n", median1 ) ;		//print the median of array arrA
    if ( N % 2 == 0 )						//check if N is even or not
    {
	median2 = ( ( arrB[ N / 2 ] + arrB[ ( N / 2) - 1 ] ) / 2.0 ) ;	//Calculate the median of array arrB as the average of two middle elements (if N is even).
    }
    else
    {
	median2 = arrB[ N / 2 ] ;			 		//Calculate the median of arrB, which is the middle element when N is odd.
    }
    printf("Median of array2 : %g\n", median2 ) ;			//print median of array arrB
    final_median = ( ( median1 + median2 ) / 2 ) ;			//Calculate the final median as the average of the medians from arrA and arrB.
    printf("Median of both arrays : %g\n", final_median ) ;		//print the final median
    return 0;
}
