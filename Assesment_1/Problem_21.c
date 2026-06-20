#include<stdio.h>
int main()
{
    int n,ones,hundreds,result;
    printf("enter a 3 digit number:");
    scanf("%d",&n);
    result=n-5;
    ones=n%10;
    hundreds=n/100;
    (ones%2!=0 && hundreds%2!=0) && (printf("%d \n",result));
    !(ones%2!=0 && hundreds%2!=0) && (printf("%d \n",n));
    return 0;
}