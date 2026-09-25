/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=1,k=3;i<=7;i=i+2,k--)
	{
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=5,k=1;i>=1;i=i-2,k++)
	{
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
C:\cproject>program2_day27.out
   *
  ***
 *****
*******
 *****
  ***
   *

C:\cproject>*/