/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d",s);
	return 0;
}
/*
C:\cproject>program1_day29.out
4
2
4
6
8
20
C:\cproject>program1_day29.out
3
1
1
1
3
C:\cproject>*/