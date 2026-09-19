/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
	int n,c=0,st,p=1,r=0,t,j=0;
	scanf("%d",&n);
	st=n;
	while(st>0)
	{
		c++;
		p=p*10;
		r=r*10+(st%10);
		st=st/10;
	}
	p=p/10;
	printf("%d",n%10);
	while(r>0)
	{
		t=r%10;
		if(j!=0 && j!=c-1)
		{
			printf("%d",t);
		}
		r=r/10;
		j++;
	}
	printf("%d",n/p);
	return 0;
}
 /*
C:\cproject>program1_day21.out
1234
4231
C:\cproject>program1_day21.out
1001
1001
C:\cproject>*/