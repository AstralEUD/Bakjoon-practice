#include <stdio.h>
main () {
    int a,b;
    while (scanf("%d %d",&a,&b) != -1) {
        if ((a&&b) == 0) break;
        printf("%d\n",a+b);
    }
}