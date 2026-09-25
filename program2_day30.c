/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
	int n,i,c1=0,c2=0,c3=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			c1++;
		}
		else if(a[i]<0)
		{
			c2++;
		}
		else
		{
			c3++;
		}
	}
	printf("Positive=%d, Negative=%d, Zero=%d",c1,c2,c3);
	return 0;
}
/*C:\cproject>program2_day30.out
5
-1
0
1
2
-5
Positive=2, Negative=2, Zero=1
C:\cproject>*/