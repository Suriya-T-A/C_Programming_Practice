#include <stdio.h>
int main()
{
    int num,result;
    scanf("%d",&num);
    if(num<1000||num>9999)return 0;
    result=((num/100)%10)*1000+(num/1000)*100+((num/10)%10)*10+num%10;
    printf("%d",result);
    return 0;
}
