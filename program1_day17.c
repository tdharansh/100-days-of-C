/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main()
{
	int n,t,r,s=0;
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s+r*r*r;
		t=t/10;
	}
	if(s==n)
		printf("Armstrong");
	else
		printf("Not Armstrong");
	return 0;
}

/*
C:\cprog2>gcc program1_day17.c -o program1_day17.out

C:\cprog2>program1_day17.out
153
Armstrong
C:\cprog2>program1_day17.out
123
Not Armstrong
C:\cprog2>
*/