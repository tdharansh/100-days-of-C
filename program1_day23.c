/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
int main()
{
	int a=2,b=3,i,n;
	float s=0.0f;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+((float)a/b);
		a=a+2;
		b=b+4;
	}
	printf("Approximate sum: %.2f",s);
	return 0;
}
/*
C:\cproject>program1_day23.out
3
Approximate sum: 1.78
C:\cproject>program1_day23.out
5
Approximate sum: 2.84
C:\cproject>
*/