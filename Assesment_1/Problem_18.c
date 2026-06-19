#include <stdio.h>
int main() 
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - 5;
    (num %2==0) && printf(" %d\n", num) ;
    (num %2!=0) && printf(" %d\n", result);
    return 0;
}
