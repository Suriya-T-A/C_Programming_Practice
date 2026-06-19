#include <stdio.h>
int main() 
{
    int num, result,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=(num/10)%10;
    result = num - 5;
    (n %2==0) && printf(" %d\n", num) ;
    (n %2!=0) && printf(" %d\n", result);
    return 0;
}
