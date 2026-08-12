/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>

int main()
{
	int a,b;
	int sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}

/*C:\>cd C:\Users\tdhar\Desktop\cprog

C:\Users\tdhar\Desktop\cprog>gcc program1_day1.c -o program1_day1.out

C:\Users\tdhar\Desktop\cprog>program1_day1.out
3
4
sum=7
C:\Users\tdhar\Desktop\cprog>program1_day1.out
15
-1
sum=14
C:\Users\tdhar\Desktop\cprog>program1_day1.out
-1
20
sum=19
C:\Users\tdhar\Desktop\cprog>
*/