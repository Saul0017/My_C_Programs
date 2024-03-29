#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to print the numbers in X format as shown below.
Sample Input: 5
Sample Output:
1   5
 2 4
  3
 2 4
1   5
*/
int main()	//the main function where program executution start
{
    int num, row, col;			//declaring variables as interger 
    printf("Enter the number: ");	//ptomt the user for the input
    scanf("%d", &num);			//to get the integer number from the user
    for ( row = 1; row <= num; row++ )	//outer for loop for row which iterates from 1 to 'num' value
    {
	for( col = 1; col <= num; col++ )		//inner for loop for column whitch iterates from 1 to 'num' value 
	{
	    if ( row == col || row + col == (num+1) )	//check if the 'row' value is equal to 'col' value or if the addition of 'row' and 'col' value is equal to addition of 'num' and 1
	    {
		printf("%d", col);			//if the condtion is true print the current 'col' value 
	    }
	    else
	    {
		printf(" ");		//else print the space
	    }
	}
    printf("\n");			//print new line after each row
    }
    return 0;				//indicates successfull program execution
}
