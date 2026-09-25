/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
	int n,i,s;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("Found at index %d",i);
		}
	}
	printf("-1");
	return 0;
}
/*C:\cproject>program1_day31.out
5
3
1
2
3
4
5
Found at index 2

C:\cproject>program1_day31.out
4
25
10
20
30
40
-1
C:\cproject>*/