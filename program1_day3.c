/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()
{
	float celsius;
	float fahrenheit;
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("fahrenheit=%f",fahrenheit);
	return 0;
}

/*
C:\>cd C:\Users\tdhar\Desktop\cprog

C:\Users\tdhar\Desktop\cprog>gcc program1_day3.c -o program1_day3.out

C:\Users\tdhar\Desktop\cprog>program1_day3.out
0
fahrenheit=32.000000
C:\Users\tdhar\Desktop\cprog>program1_day3.out
100
fahrenheit=212.000000
C:\Users\tdhar\Desktop\cprog>
*/
	