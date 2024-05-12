#include <stdio.h>
/*
Name: Saurabh Tayde
*/
int sec_largest(int [] , int );			//prototype for function sec_largest which takes two integer arguments and returns integer value
int main()					//main function whare program execution start
{
    int size, ret;
    printf("Enter the size of the array : ");
    scanf("%d", &size );
    int arr[size];						//declaring array 'arr' size and type as integer array
    printf("Enter the elements into the array: ");
    for( int i = 0 ; i < size ; i++ )				//lop iterates from 0 to size-1.
    {
	scanf("%d", &arr[i]);					//read integer value from user for ith index of aaray 'arr'
    }
    ret = sec_largest( arr , size );					//calling function 'sec_largest' and store its return value in ret variable
    printf("Second largest element of the array is %d\n", ret );
}
int sec_largest(int arr[] , int size )				//function to find the second largest element of the array
{
    int first_large , sec_large ;				//declaring variables as integer
    first_large = arr[0];					//assiging firsr_large variable with value of first element of array 'arr[]'
    sec_large = arr[1];
    for ( int i = 0 ; i < size ; i++ )				//loop iterates from 0 to size-1
    {
	if(arr[i] > first_large )				// to check if the ith index element of array 'arr' is grater than  value variable first_large
	{
	    sec_large = first_large ;				//store the value of variable 'first_large' into 'sec_large'
	    first_large = arr[i] ;				//store the ith index element of array 'arr' in variable 'first_large' 
	}
	else if ( arr[i] < first_large && arr[i] > sec_large )		//else to check if the i'th  index element is less than value of first_large and greater than sec_large
	{
	    sec_large = arr[i] ;					// store i'th index element in variable sec_large
	}
    }
    return sec_large ;						//return value of variable sec_large
}
