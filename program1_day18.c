/*Q35: Write a program to print all factors of a given number.


Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/


#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}

/*
C:\cprog2>gcc  program1_day18.c -o program1_day18.out

C:\cprog2>program1_day18.out
6
1236
C:\cprog2>program1_day18.out
10
12510
C:\cprog2>
*/