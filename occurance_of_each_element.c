#include <stdio.h>
/*
Name: Saurabh Tayde
Description: 
Sample Input: 
Sample Output: 
*/
int main()
{
    int size ,count,visited = -1;
    scanf("%d",&size);
    int arr[size],freq[size];
    for( int i = 0; i < size; i++ )
    {
	scanf("%d",&arr[i]);
    }

    printf("| Elements | No. of Occurance |\n");
    for( int i = 0; i < size ; i++ ) 
    {
	count = 1;
	if(freq[i] != visited )
	{
	    for( int j = i + 1; j < size ; j++ )
	    {
		if( arr[i] == arr[j] )
		{
		    count++;
		    freq[j] = visited;
		}
	    }
	    
	    printf( "| %-9d| %-9d        |\n",arr[i],count );
	}
    }
}
