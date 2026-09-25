/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
	int s,i,j;
	scanf("%d",&i);
	int n[i+1];
	for(j=0;j<i;j++)
	{
		scanf("%d",&n[j]);
	}
	scanf("%d",&s);
	for(j=i-1;j>=i/2;j--)
	{
		n[j+1]=n[j];
	}
	n[i/2]=s;
	for(j=0;j<=i;j++)
	{
		printf("%d ",n[j]);
	}
	return 0;
}
/*C:\cproject>program2_day33.out
5
1
2
4
5
6
3
1 2 3 4 5 6
C:\cproject>*/