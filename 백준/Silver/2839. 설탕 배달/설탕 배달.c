#include <stdio.h>
main () {
	int n, kg5, kg3, i, p, q, cnt=0;
	scanf("%d",&n);
	while (1) {
		if (n%5 == 0) {
			cnt+=n/5;
			break;
		}
		n-=3;
		cnt++;
		if (n==0) {
			break;
		}
		if (n<2) {
			printf("-1");
			return 0;
		}
	}
	printf("%d",cnt);
}
