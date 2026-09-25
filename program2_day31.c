	/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
	int n,i,t,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=n-1;
	for(i=0;i<n/2;i++,k--)
	{
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
/*
C:\cproject>program2_day31.out
4
1
2
3
4
4 3 2 1
C:\cproject>*/