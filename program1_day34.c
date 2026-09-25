/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
	int s,i,j,p;
	scanf("%d",&i);
	int n[i+1];
	for(j=0;j<i;j++)
	{
		scanf("%d",&n[j]);
	}
	scanf("%d",&p);
	scanf("%d",&s);
	for(j=i-1;j>=p;j--)
	{
		n[j+1]=n[j];
	}
	n[p]=s;
	for(j=0;j<=i;j++)
	{
		printf("%d ",n[j]);
	}
	return 0;
}
/*
C:\cproject>program1_day34.out
4
10
20
30
40
2
15
10 20 15 30 40
C:\cproject>*/