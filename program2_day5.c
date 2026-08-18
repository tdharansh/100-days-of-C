/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main()
{
int n,h,m,s;
scanf("%d",&n);
h=n/3600;
m=(n%3600)/60;
s=(n%3600)%60;
printf("%d:%d:%d",h,m,s);
return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day5.c -o program2_day5.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day5.out
3661
1:1:1
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day5.out
7322
2:2:2
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/