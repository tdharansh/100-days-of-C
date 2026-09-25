/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main()
{
	int n,i,c1=0,c2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	printf("Even=%d, Odd=%d",c1,c2);
	return 0;
}
/*C:\cproject>program1_day30.out
6
1
2
3
4
5
6
Even=3, Odd=3
C:\cproject>program1_day30.out
4
2
4
6
8
Even=4, Odd=0
C:\cproject>*/