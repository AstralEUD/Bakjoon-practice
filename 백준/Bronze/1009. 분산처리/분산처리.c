#include <stdio.h>
int main () {
	int a, i, b, c,p,d;
	scanf("%d",&a);
	while (a--) {
		scanf("%d %d",&b,&c);
		d=1;
		for (p=1; p<=c; p++) {
			d = (d*b) % 10;
		}
		if (d==0) d=10;
		printf("%d\n",d);
	}
}