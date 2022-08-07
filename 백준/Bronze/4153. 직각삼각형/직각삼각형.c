#include <stdio.h>
int main () {
	long long int a, b, c, n, i;
	scanf("%d %d %d",&a,&b,&c);
	while (a+b+c != 0) {
		if ((a*a) + (b*b) == (c*c) || (a*a) + (c*c) == (b*b) || (b*b) + (c*c) == (a*a)) {
			printf("right\n");
		} else {
			printf("wrong\n");
		}
		scanf("%d %d %d",&a,&b,&c);
	}
}