/*Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212*/
#include <stdio.h>
int main()
{
    float n,m;
    scanf("%f",&n);
    m=(9/5.0f)*n+32.0f;
    printf("Fahrenheite=%.2f",m);
    return 0;
}

/*
C:\>cd C:\Users\tdhar\OneDrive\Desktop\cprog2

C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day3.c -o program2_day3.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day3.out
0
Farhenite=32.00
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day3.out
100
Farhenite=212.00
C:\Users\tdhar\OneDrive\Desktop\cprog2>

*/