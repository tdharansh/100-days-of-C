/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>
    int main()
    {
     int n;
     scanf("%d",&n);
     if(n==0)
     {
        printf("Number is Zero");
     }
     else
     {
        if(n>0)
        {
            printf("Number is Positive");
        }
        else 
        {
            printf("Number is Negative");
        }
     }
     return 0;
    }
	
/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day6.c -o program2_day6.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day6.out
-5
Number is Negative
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day6.out
0
Number is Zero
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day6.out
10
Number is Positive
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/