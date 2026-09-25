/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
	int f,l,m,s,i,j;
	scanf("%d",&i);
	int n[i];
	for(j=0;j<i;j++)
	{
		scanf("%d",&n[j]);
	}
	scanf("%d",&s);
	f=0;
	l=i-1;
	while(f<=l)
	{
		m=(f+l)/2;
		if(n[m]<s)
		{
			f=m+1;
		}
		else if(n[m]==s)
		{
			printf("Found at index %d",m);
		}
		else
		{
			l=m-1;
		}
	}
	printf("-1");
	return 0;
}
/*
C:\cproject>program1_day33.out
5
1
3
5
7
9
7
Found at index 3
C:\cproject>gcc program1_day33.c -o program1_day33.out

C:\cproject>program1_day33.out
5
1
3
5
7
9
6
-1
C:\cproject>*/