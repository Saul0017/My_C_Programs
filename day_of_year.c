#include <stdio.h>
/*
Name: Saurabh Tayde
Description: program to find which day of the year
Sample Input:
Enter the value of 'n': 5
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day: 7
Sample Output:
The day is Wednesday
*/
int main()
{
    int num, first_day, res;			//declaring variables
    printf("Enter the value of 'n': ");		//prompt the user for the input
    scanf("%d", &num);				//to get 'n'th integer value the from the user
    if ( num > 0 && num <= 365 )		//to check if value num variable  is greater than 0 and less then or equal to 365
    {
	printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day: ");	//if both condtion is true show the menu for choosing first day and prompt the user for enter the option number
	scanf("%d", &first_day);				//to get the integer value of option
	if ( first_day > 0 && first_day <= 7 )			//to check if the value of variable fisrt_day greater than 0 and less than or equal to 7
	{
	    switch ( ( ( num + first_day ) - 1 ) % 7 )		//if the both condition is true perform the operation base on evaluated value of given expression
	    {
		case 1 :		
		    {
			printf("The day is Sunday\n");		//if the evaluated value is 1 print the massage indicating 'n' th day is sunday
			break;
		    }
		case 2 :
		    {
			printf("The day is Monday\n");		//if the evaluated value is 2 print the massage indicating 'n' th day is Monday
			break;
		    }
		case 3 :
		    {
			printf("The day is Tuesday\n");		//if the evaluated value is 3 print the massage indicating 'n' th day is sunday
			break;
		    }
		case 4 :
		    {
			printf("The day is Wednesday\n");	//if the evaluated value is 4 print the massage indicating 'n' th day is Wednesday
			break;
		    }
		case 5 :
		    {
			printf("The day is Thursday\n");	//if the evaluated value is 5 print the massage indicating 'n' th day is Thursday
			break;
		    }
		case 6 :
		    {
			printf("The day is Friday\n");		//if the evaluated value is 6 print the massage indicating 'n' th day is friday
			break;
		    }
		case 0 :
		    {
		    printf("The day is Saturday\n");		//if the evaluated value is 0 print the massage indicating 'n' th day is saturday
		    break;
		    }
	    }
	}
	else
	{
	    printf("Error: Invalid input, first day should be > 0 and <= 7\n");		//print the error massage indicating value of variable 'first_day' should be greater than 0 and less than or equal to 7
	}
    }
    else
    {
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");		 //print the error massage indicating value of 'n' day should be greater than 0 and less than or equal to 365
    }
    return 0;		//incicates successfull program execution
}
