/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main()
{
	int a,b;
	int sum,mul,div,rem;
	printf("Hello! Enter two numbers: ");
	scanf("%d%d", &a,&b);
	printf("a=%d b=%d\n",a,b);
	sum=a+b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("sum=%d,mul=%d,div=%d,rem=%d",sum,mul,div,rem);
	return 0;
}

/*C:\>cd C:\Users\tdhar\Desktop\cprog

C:\Users\tdhar\Desktop\cprog>gcc program2_day2.c -o program2_day2.out

C:\Users\tdhar\Desktop\cprog>program2_day2.out
Hello! Enter two numbers: 10
2
a=10 b=2
sum=12,mul=20,div=5,rem=0
C:\Users\tdhar\Desktop\cprog>program2_day2.out
Hello! Enter two numbers: 7
3
a=7 b=3
sum=10,mul=21,div=2,rem=1
C:\Users\tdhar\Desktop\cprog>
*/