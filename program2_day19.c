/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/


#include <stdio.h>
int main()
{
	int n,r,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}

/*
C:\cprog2>gcc program2_day19.c -o program2_day19.out

C:\cprog2>program2_day19.out
123
6
C:\cprog2>program2_day19.out
999
27
C:\cprog2>
*/