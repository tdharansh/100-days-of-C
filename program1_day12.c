/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>
int main()
{
int n,f;
scanf("%d",&n);
if(n<=5)
{
f=n*2;
}
else if(n>5 && n<=10)
{
f=(5*2)+((n-5)*4);
}
else if(n>10 && n<=30)
{
f=(5*2)+(5*4)+((n-10)*6);
}
else 
{
printf("Membership Cancelled");
return 0;
}
printf("Fine %d",f);
return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day11.c -o program1_day11.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day11.out
2
Month - February, Days - 28
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day11.out
12
Month - December, Days - 31
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day12.c -o program1_day12.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day12.out
4
Fine 8

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day12.out
8
Fine 22
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day12.out
15
Fine 60
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day12.out

31
Membership Cancelled
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/

