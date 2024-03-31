#include <stdio.h>
/*
Name: Saurabh Tayde
Description: prograam to print pyramid pattern as shown below
Sample Input: 5
Sample Output: 
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/
int main()				//the main function where the program executuion start
{
    int num, row, col;				//declaring variables as integer
    printf("Enter the number: ");		//promt the user for the input
    scanf("%d", &num);				//to get the integer number from the user
    for ( row = num ; row >= 1 ; row-- )	//this outer for loop for rows which iterates from value of 'num' to 1
    {
	for (col = row ; col <= num ; col++ )	//this inner for loop for col which iterates from current value of 'row' variable to 1
	{
	    printf("%d ", col);			//print the value of col variable 
	}
	printf("\n");				//print new line
    }
    for ( row = 2 ; row <= num ; row++ )	//this outer loop for rows which iterates from 2 to value of 'num' vaiable
    {
	for ( col = row ; col <= num ; col++ )	//this inner loop for col which iterates from current value of 'row' to 'num' value
	{
	    printf("%d ", col);			//print the value of 'col' variable
	}
	printf("\n");				//print new line
    }
    return 0;
}
