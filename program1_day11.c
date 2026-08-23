/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	switch(n)
{
    case 1:
        printf("Month - January, Days - 31");
        break;

    case 2:
        printf("Month - February, Days - 28");
        break;

    case 3:
        printf("Month - March, Days - 31");
        break;

    case 4:
        printf("Month - April, Days - 30");
        break;

    case 5:
        printf("Month - May, Days - 31");
        break;

    case 6:
        printf("Month - June, Days - 30");
        break;

    case 7:
        printf("Month - July, Days - 31");
        break;

    case 8:
        printf("Month - August, Days - 31");
        break;

    case 9:
        printf("Month - September, Days - 30");
        break;

    case 10:
        printf("Month - October, Days - 31");
        break;

    case 11:
        printf("Month - November, Days - 30");
        break;

    case 12:
        printf("Month - December, Days - 31");
        break;

    default:
        printf("Invalid Input");
}
}

/*
C:\>cd C:\Users\tdhar\OneDrive\Desktop\cprog2

C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day11.c -o program1_day11.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day11.out
2
Month - February, Days - 28
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day11.out
12
Month - December, Days - 31
C:\Users\tdhar\OneDrive\Desktop\cprog2>

*/
		