#include <stdio.h>
int main()
{
    int num,a,b,c,d;
    scanf("%d",&num);
    if(num<1000||num>9999)
    {
        return 0;
    }
    a=num/1000;
    b=(num/100)%10;
    c=(num/10)%10;
    d=num%10;
    if(a==c||b==d)
    {
        printf("success");
    }
    else 
    {
        printf("failure");
    }
    return 0;
}
