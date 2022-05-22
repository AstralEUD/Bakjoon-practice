#include <stdio.h>
int main () {
    int a, i, t;
    scanf("%d",&a);
    for (i=1; i<=a; i++) {
        for (t=1; t<=i; t++) {
            printf("*");
        }
        printf("\n");
    }
}