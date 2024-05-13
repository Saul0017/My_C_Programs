#include <stdio.h>						  	//include the standard I/O library for printf and scanf
/*
Name: Saurabh Tayde
Date: 
Description: Read size and elements into the array.After reading the input,to pass array to the function.In function, to move non-duplicate elements into new array.print this new array in main
*/
void rem_duplicates(int arr1[], int size, int arr2[], int *new_size);		//prototype for the function 'rem_duplicates' which return type is void and it takes 4 arguments
int main()
{
    int size , new_size ;						//declaring variable type as integer
    printf("Enter the size: ");
    scanf("%d", &size );
    int arr1[size] , arr2[size] ;
    printf("Enter elements into the array: ");				//prompt the user to enter the element from the user
    for( int i = 0 ; i < size ; i++ )					//loop iterates from 0 to (size-10
    {
	scanf("%d", &arr1[i] );						//read the element for the i'th index of arrar 'arr1'
    }
    rem_duplicates( arr1 , size , arr2 , &new_size );			//calling function 'rem_duplicates' by passing 4 arguments
    printf("After removing duplicates: ");
    for( int j = 0 ; j < new_size ; j++ )				//loop iterates from 0 to (new_size - 1), new_size is modified in 'fun' function
    {
	printf("%d ", arr2[j] );					//the j'th element of array 'aar2' in which non duplicate element is stored
    }
    printf("\n");
    return 0;
}
void rem_duplicates(int arr1[], int size, int arr2[], int *new_size)	// function 'rem_duplicates' to copy non-duplicate elements into new array 'arr2' from array 'arr1'.
{
    arr2[0] = arr1[0] ;							// copy the first element of 'arr1' into the first element of 'arr2' 
    int count = 1 ;							//Initialize count to 1, as we already copied the first element and to keep track of the unique elements
    for( int i = 1 ; i < size ; i++ )					//loop iterates from 1 to (size - 1)	
    {
	int flag = 0 ;							//initialize flag with 0 to track duplicate element in array 'arr1'
	for( int j = 0 ; j < count ; j++ )				//loop iterates from 0 to current (count - 1)
	{
	    if( arr1[i] == arr2[j] )					//to check if the current element in 'arr1' is already in 'arr2'
	    {
		flag = 1 ;						//Set the flag to 1 to indicate a duplicate
		break ;							//exit the inner loop
	    }
	}
	if(flag == 0 )							//to check if value of flag is equal to zero i.e. if no duplicate  is found
	{
	    arr2[count] = arr1[i] ;					//then copy that i'th index unique element to index 'count' of arry 'arr2'
	    count++;							//increment count of unique element  and to keep track of the new size of 'arr2'
	}
    }
    *new_size = count ;							//modify the value  which is present at the address strored in new_size pointer with the count of unique elements
}
