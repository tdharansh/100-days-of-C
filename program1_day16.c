/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/


#include <stdio.h>
int main()
{
    int st,n,i=0;
    int c[100];
    scanf("%d",&n);
    st=n;
if (n == 0)
 {
    printf("0");
    return 0;
}
    while(st>0)
    {
        c[i]=st%2;
        st=st/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",c[j]);
    }
    return 0;
}

/*
C:\cprog2>gcc program1_day16.c -o program1_day16.out

C:\cprog2>program1_day16.out
10
1010
C:\cprog2>program1_day16.out
7
111
C:\cprog2>
*/