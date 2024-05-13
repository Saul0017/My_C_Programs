#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to read size of array and size no.of elements from user and store them into an array, print the values in sorted order without modifying or copying array
Sample Input: 
Enter the size : 7
Enter 7 elements
1 3 2 5 4 7 6
Sample Output: 
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6
*/
void print_sort(int [], int);
int main()							//the main function where program exectutio start
{
    int size, iter;						//declaring variables type as integer 
    printf("Enter the size of the array : ");
    scanf("%d", &size );					//read the integer value from user and it in size variable
    int arr[size];
    printf("Enter the %d elements:\n", size );			//prompt the user to enter 'size' number of elements
    for ( iter = 0; iter < size; iter++ )			//loop iterates from 0 to (size - 1)
    {
        scanf("%d", &arr[iter]);				//read the element to store at the current i'th index of araay 'arr'
    }
    print_sort(arr, size);					//call the print_sort function to print the sorted elements of the array.Pass the 'arr' base address and array size 'size' as arguments.
    printf("Original array values ");				//prompt the user to enter 'size' number of elements
    for ( int j = 0 ; j < size ; j++ )				//loop iterates from 0 to (size - 1)
    {
        printf("%d ", arr[j] );					//read the element to store at the current i'th index of araay 'arr'
    }
    printf("\n");						//print new line
    return 0 ;
}
void print_sort(int arr[], int size )				//function to print the values in sorted order without modifying or copying array 
{
    int large, small, sec_small ;				//declare variables type as integer to keep track of large, small, and second small values. in array 'arr'
    large = arr[0] ;						//Initialize variable 'large' to the first element of the array
    small = arr[1] ;						//initialize variable 'small' to the second element of the array
    printf("After sorting: ");
    for( int  i = 0 ; i < size  ; i++ )				//loop iterates from 0 to (size-1) to find the largest and smallest element.
    {
	if( arr[i] > large )					//to check if the current i'th index element in array arr is larger than the current value in variable 'large'
	{
	    large = arr[i] ;					//when condtion is true update value in variable 'large' with current i'th index element
	}
	else if( arr[i] < small )				//else to check if the current i'th index element is smaller than the current value in 'large' and 'small'
	{
	    small = arr[i];					//when condtion is true update value in variable small with current i'th index element
	}
    }
    printf("%d ", small );					//prints the smallest element/value  in array
    for(int i = 0 ; i <= size - 2 ; i++ )			//loop to iterates from 0 to (size-2) to perfrom comparing operation the (size-2) times
    {
	sec_small = large ;					//initialize s'ec_small' with the 'large' value initially
	for( int j = 0 ; j < size ; j++ )			//nested loop to iterates from 0 to (size-1)  to compare elements in the array.
	{
	    if( arr[j] < sec_small && arr[j] > small )		//to check if the current element is smaller than 'sec_small' and larger than small
	    {
		sec_small = arr[j] ;				//update the value of 'sec_small' variable with curent i'th index element
            }
	}	
	printf("%d ", sec_small );			//print	the current value of 'sec_small' 
	small = sec_small ;				//Update variable 'small' to 'sec_small' for the next iteration.
    }
    printf("\n");
}
