#include <stdlib.h>
#include <stdio.h>
int main () {
    long long int a, b, c;
    scanf("%lld %lld",&a,&b);
    printf("%lld",llabs(a-b));
}