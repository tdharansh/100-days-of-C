/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{
	int a,b;
	int area;
	int perimeter;
	scanf("%d%d",&a,&b);
	area=a*b;
	perimeter=2*a+2*b;
	printf("area=%d,perimeter=%d",area,perimeter);
	return 0;
}

/*
C:\>cd C:\Users\tdhar\Desktop\cprog

C:\Users\tdhar\Desktop\cprog>gcc program1_day2_q1.c -o program1_day2_q1.out

C:\Users\tdhar\Desktop\cprog>program1_day2_q1.out
5
10
area=50,perimeter=30
C:\Users\tdhar\Desktop\cprog>program1_day2_q1.out
3
7
area=21,perimeter=20
C:\Users\tdhar\Desktop\cprog>
*/