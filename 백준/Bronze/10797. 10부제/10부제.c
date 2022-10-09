#include <stdio.h>
int main () {
    int a, i, cnt = 0;
    int b[6];
    scanf("%d",&a);
    scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]);
    for (i=0; i<5; i++) {
        if (a==b[i]) cnt++;
    }
    printf("%d",cnt);
}