#include <stdio.h>
/*
Name: Saurabh Tayde
Description:  Program to read size and array elements from the user.find 3rd largest element in the array without sorting or modifying the array.
*/
int third_largest(int [] , int );			//prototype for the function third_largest which returns integer value
int main()
{
    int size, ret;					//declaring variables type as integer
    printf("Enter the size of the array : ");
    scanf("%d", &size );
    int arr[size];					//Declare an integer array 'arr' with a size of 'size' to store elements.
    printf("Enter the elements into the array: ");
    for( int i = 0 ; i < size ; i++ )			//loop iterates from 0 to size-1
    {
	scanf("%d", &arr[i]);						//reading user-provided elements into the 'arr' array.
    }
    ret = third_largest( arr , size );					//call the function thir_large and stores it return value in ret variable
    printf("Third largest element of the array is %d\n", ret );			//print the third largest element
}
int third_largest(int arr[] , int size )				//the function third_largest is to find the third largest element in the array
{
    int first_large = arr[0];					//assiging firsr_large variable with value of first element of array 'arr'
    int sec_large = arr[1];				//assiging second_large variable with value of second element of array 'arr'
    int third_large = arr[2] ;				//assiging third_large variable with value of third element of array 'arr'
    for ( int i = 0 ; i < size ; i++ )			//loop iterates from 0 to size-1
    {
	if (arr[i] > first_large )				//to check if the ith index element of array 'arr' is grater than  value variable first_large
	{
	    third_large = sec_large ;				//storing value of variable 'sec_large' in 'third_large'
	    sec_large = first_large ;			//storing value of variable 'first_large' in 'sec_large'
	    first_large = arr[i] ;				//storing i'th index element of array 'arr' in 'first_large'
	}
	else if( arr[i] < first_large && arr[i] > sec_large )	//else to check if the i'th index element of array 'arr' is less than value of variable 'first_large' and greater than 'sec_large'
	{
	    third_large = sec_large ;				//storing value of variable 'sec_large' in 'third_large'
	    sec_large = arr[i] ;					//storing i'th index element of array 'arr' in 'sec_large'
	}
	else if(arr[i] < sec_large && arr[i] > third_large )		//else to check if the i'th  index element is less than value of 'sec_large' and greater than 'third_large'
	{
	    third_large = arr[i] ;					  //storing i'th index element of array 'arr' in variable'third_large'
	}
    }
    return third_large ;						//return third largeest element in the array
}
