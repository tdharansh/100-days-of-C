/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
	int n,c=0,st,t=0,i=0,lc=0,cc=0,f=1,l;
	scanf("%d",&n);
	st=n;
	while(st>0)
	{
		c++;
		st/=10;
	}
	int a[c];
	st=n;
	while(st>0)
	{
		t=st%10;
		a[i]=t;
		i++;
		st/=10;
	}
	while(n>0)
	{
		t=n%10;
		for(i=0;i<c;i++)
		{
			if(t==a[i])
			{
				cc++;
			}
		}
		if(f==1)
		{
			lc=cc;
			l=t;
			f=0;
		}
		else if(lc<=cc)
		{
			lc=cc;
			l=t;
		}
		cc=0;
		n=n/10;
	}
	printf("%d",l);
	return 0;
}
/*
C:\cproject>program2_day32.out
112233
1
C:\cproject>program2_day32.out
887799
8
C:\cproject>program2_day32.out
5557899
5
C:\cproject>
*/
 