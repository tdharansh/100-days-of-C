/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a==b && b==c && c==a)
 {
    printf("Equilateral");
 }   
 else if(a==b || a==c || b==c )
 {
    printf("Isosceles");
 }
 else 
 {
    printf("Scalene");
 }
 return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day10.c -o program1_day10.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day10.out
3
3
3
Equilateral
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day10.out
3
3
4
Isosceles
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day10.out
234
3
4
Scalene
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/