/*Q26: Write a program to print numbers from 1 to n.


Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d\t",i);
}
return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day13.c -o program2_day13.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day13.out
5
1       2       3       4       5
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day13.out
3
1       2       3
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/