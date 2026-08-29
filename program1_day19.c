/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main()
{
	int a,b,i,lcm;
	scanf("%d%d",&a,&b);
	for(i=1; ;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	}
	printf("%d",lcm);
	return 0;
}

/*
C:\cprog2>gcc program1_day19.c -o program1_day19.out

C:\cprog2>program1_day19.out
4
5
20
C:\cprog2>program1_day19.out
7
3
21
C:\cprog2>
*/