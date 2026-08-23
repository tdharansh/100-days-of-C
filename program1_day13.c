/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include <stdio.h>
int main()
{
int a,b;
char c;
scanf("%d%d %c",&a,&b,&c);
switch(c)
{
case '+':printf("%d",a+b);
break;
case '-':printf("%d",a-b);
break;
case'*':printf("%d",a*b);
break;
case '/':printf("%d",a/b);
break;
case '%':printf("%d",a%b);
break;
default:printf("Invalid Input");
}
return 0;
}

/*
C:\Users\tdhar\OneDrive\Desktop\cprog2>gcc program1_day13.c -o program1_day13.out

C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day13.out
4
2
+
6
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day13.out
10
3
%
1
C:\Users\tdhar\OneDrive\Desktop\cprog2>program1_day13.out
15
5
/
3
C:\Users\tdhar\OneDrive\Desktop\cprog2>
*/