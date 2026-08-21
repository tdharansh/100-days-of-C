/*Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/


#include <stdio.h>
int main()
{
int s,c;
float p;
scanf("%d%d",&c,&s);
p=((s-c)/(float)c)*100.0f;
if(p>0)
{
printf("Profit: %.2f %%",p);
}
else if(p<0)
{
printf("Loss: %.2f %%",-p);
}
else
{
printf("No Loss No Profit");
}
return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day11.c -o program2_day11.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day11.out
1000
1200
Profit: 20.00 %
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day11.out
1000
800
Loss: 20.00 %
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day11.out
1000
100
Loss: 90.00 %
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day11.out
1000
1000
No Loss No Profit
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/