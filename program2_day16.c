/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
int main()
{
    int n,t,r;
    scanf("%d",&n);
    int st=n;
    while(st>0)
    {
        t=st%10;
        r=r*10+t;
        st/=10;
    }
    if(r==n)
    {
        printf(" Palindrome ");
    }
    else 
    {
        printf("Not Palindrome ");
    }
    return 0;
}

/*
C:\cprog2>gcc program2_day16.c -o program2_day16.out

C:\cprog2>program2_day16.out
121
 Palindrome
C:\cprog2>program2_day16.out
123
Not Palindrome
C:\cprog2>
*/