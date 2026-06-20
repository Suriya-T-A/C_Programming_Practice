#include<stdio.h>
int main()
{
    int n,sum,result;
    printf("enter a 2 digit number:");
    scanf("%d",&n);
    result=n-5;
    sum= (n%10)+(n/10);
    (sum%2!=0) && (printf("%d \n",result));
    (sum%2==0) && (printf("%d \n",n));
    return 0;
}