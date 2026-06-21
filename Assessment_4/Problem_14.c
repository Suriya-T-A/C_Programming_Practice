#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g;
    scanf("%d", &a);
    b = a;
    c = 0;
count:
    if (b != 0) {
        c++;
        b /= 10;
        goto count;
    }
    d = 1;
    e = c;
power:
    if (e > 1) {
        d *= 10;
        e--;
        goto power;
    }
    f = a / d;
    g = a % 10;
    b = (a % d) / 10;
    a = g * d + b * 10 + f;
    printf("%d\n", a);
    return 0;
}