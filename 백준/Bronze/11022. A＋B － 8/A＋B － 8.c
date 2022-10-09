#include <stdio.h>
int main () {
    int a, b, c, i;
    scanf("%d",&c);
    for (i=0; i<c; i++) {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);
    }
}