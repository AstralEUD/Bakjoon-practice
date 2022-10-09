#include <stdio.h>
int main () {
    int b, c, i;
    scanf("%d",&b);
    char e[b];
    scanf("%s",&e);
    c=0;
    for (i=0; i<b; i++) {
        c+=e[i]-'0';
    }
    printf("%d\n",c);
}