#include <stdio.h>
int main () {
    int a, b, c, d, e;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    e = a+b;
    if (c==0) {d = e;} else {
        if ((e/c) >= 2) {
            d = e-(2*c);
        } else {
            d = e;
        }
    }
    printf("%d",d);
}