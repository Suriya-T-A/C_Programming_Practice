#include <stdio.h>
int main() 
{
    int num, rev;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    rev = (num / 1000) * 1000
        + ((num / 100) % 10) * 100
        + (num %10 )* 10
        + ((num / 10)%10);
    printf(" %d\n", rev);
    return 0;
}
