/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day4.c -o program2_day4.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day4.out
5
Sum=15
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day4.out
10
Sum=55
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/