/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%4==0 && n%100!=0) || n%400==0)
    {
      printf("Leap year");
    }
    else 
    {
        printf("Not a leap year");
    }
    return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day7.c -o program1_day7.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day7.out
2020
Leap year
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day7.out
1900
Not a leap year
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day7.out
2000
Leap year
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/