/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>
int main()
{
int n,s=0,i,c=0;
scanf("%d",&n);
for(i=1;c<n;i++)
{
if(i%2!=0)
{
s=s+i;
c++;
}
}
printf("%d",s);
return 0;
}

/*
C:\>cd C:\Users\tdhar\OneDrive\Desktop\cprog2

C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day14.c -o program1_day14.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day14.out
3
9
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day14.out
5
25
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/