/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
int main()
{
   char c;
   scanf(" %c",&c);
   if(c>='a' && c<='z')
   {
      printf("Lowercase Alphabet");
   }
   else if(c>='A' && c<='Z')
   {
      printf("Uppercase Alphabet");
   }
   else if(c>='0' && c<='9')
   {
      printf("Digit");
   }
   else 
   {
      printf("Special character");
   }
   return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day8.c -o program1_day8.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day8.out
A
Uppercase Alphabet
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day8.out
a
Lowercase Alphabet
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day8.out
3
Digit
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day8.out
#
Special character
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/