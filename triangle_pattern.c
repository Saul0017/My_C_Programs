#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to print triangle pattern as shown below
Sample Input: 4
Sample Output:
1 2 3 4
5   6
7 8
9
*/
int main()	//the  main function where the program executuion start
{
    int num, row, col,count = 1;		//declaring variables as integer and initializing count variable by 1
    printf("Enter the number : ");		//prompt the user for the input
    scanf("%d", &num);				//get the interger number from user
    for ( row = 1 ; row <= num ; row++ )	//outer for loop for 'row' value for rows which iterates from 1 to num 
    {
	for( col = 1 ; col <= num ; col++ )	//inner for loop for 'col' value for columns which ieterates from 1 to num
	{
	    /*to check if the variable 'row' value is equal to 1 or if variable 'col'
	     *value is equal to 1 or if addition of row and col variable is equal to result of (num + 1)
	     */
	    if ( row == 1 || col == 1 || row + col == (num+1) )		
	    {
		printf("%d ", count++);		//if the any condition true print the currant value of variable count and increment the value of count
	    }
	    else
	    {
		printf("  ");		//if the all condition is true print the space
	    }
	}
	printf("\n");			//print the new line
    }
    return 0;			//indicates successfull program execution
}
