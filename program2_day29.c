/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main()
{
	int n,i,l,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(l<=a[i])
		{
			l=a[i];
		}
		if(s>=a[i])
		{
			s=a[i];
		}
	}
	printf("Max=%d, Min=%d",l,s);
	return 0;
}
/*
C:\cproject>program2_day29.out
5
2
9
1
4
7
Max=9, Min=1
C:\cproject>program2_day29.out
3
10
10
10
Max=10, Min=10
C:\cproject>*/