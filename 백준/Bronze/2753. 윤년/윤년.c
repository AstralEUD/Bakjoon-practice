#include <stdio.h>
int main () {
    int a;
    while (scanf("%d",&a) != -1) {
        if (((a%400) == 0) || ((a%4) == 0) && (a%100) != 0) printf("1");
        else printf("0");
    }
}