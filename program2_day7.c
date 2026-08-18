/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
int main()
{
 char c;
 scanf("%c",&c);
 if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
 {
    printf("Vowel");
 }
 else 
 {
    printf("Consonant");
 }
 return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program2_day7.c -o program2_day7.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day7.out
a
Vowel
C:\Users\tdhar\OneDrive\Desktop\cprog2>program2_day7.out
b
Consonant
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/
