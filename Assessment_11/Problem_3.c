#include <stdio.h>
void arrange_ascend(int* ptr){
    *ptr = *ptr +1 ;
}
int main(){
    int n =1 ;
    int *ptr = &n;
    while (*ptr < 6){
    printf("%d ",*ptr);
    arrange_ascend(ptr);
    }
}