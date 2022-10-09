#include <stdio.h>
int main () {
	int a[10];
	int i, n, p = 0;
	for (i=0; i<8; i++) {
		scanf("%d",&a[i]);
	}
	for (i=1; i<=8; i++) {
		if (i==a[i-1]) {
			p++;
		}
	}
	if (p==8) {
		printf("ascending");
	} else {
		p=0;
		for (i=8; i!=0; i--) {
			if (i==a[8-i]) {
				p++;
			}
		}
		if (p==8) {
			printf("descending");
		} else {
			printf("mixed");
		}
	}
}