/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
int main()
{
    float p,r,a,si,ci,n=1.0f;
    int i,t;
    scanf("%f%f%d",&p,&r,&t);
    si=(p*r*t)/100.0f;
    for(i=1;i<=t;i++)
    {
      n=n*(1+(r/100.0f));
    }
    a=p*n;
    ci=a-p;
    printf("Simple Interest=%.2f, Compoound Interest=%.2f",si,ci);
    return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day5.c -o program1_day5.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day5.out
1000
5
2
Simple Interest=100.00, Compoound Interest=102.50
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day5.out
5000
7
3
Simple Interest=1050.00, Compoound Interest=1125.22
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/