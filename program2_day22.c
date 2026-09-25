/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main()
{
	int a=3,b=4,n,i;
	float s=0.0f;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		s=s+((float)a/b);
		a=a+2;
		b=b+2;
	}
	printf("Approximate sum: %.1f",1+s);
	return 0;
}
/*C:\cproject>program2_day22.out
3
Approximate sum: 3.3
C:\cproject>program2_day22.out
5
Approximate sum: 4.4
C:\cproject>*/
 