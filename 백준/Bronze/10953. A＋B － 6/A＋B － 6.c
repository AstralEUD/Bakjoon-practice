#include <stdio.h>
main () {
    int a, b, c, t, i;
    scanf("%d",&t);
    for (i=0; i<t; i++) {
        scanf("%d,%d",&a,&b);
        printf("%d\n",a+b);
    }
}