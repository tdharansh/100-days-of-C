/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
	int n,i,k=0,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[n+m];
	for(i=0;i<n;i++,k++)
	{
		c[k]=a[i];
	}
	for(i=0;i<m;i++,k++)
	{
		c[k]=b[i];
	}
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
/*
C:\cproject>program1_day32.out
3
1
2
3
2
4
5
1 2 3 4 5
C:\cproject>*/