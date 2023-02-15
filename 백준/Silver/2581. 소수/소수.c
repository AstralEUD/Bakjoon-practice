#include <stdio.h>
#include <math.h>
int sosu (int p) {\
	int i = 2;
	if (p<2) return 0;
	for (i=2; i<=sqrt(p); i++) {
		if (p%i==0) return 0; 	
	}
	return 1;
}


main () {
	int min, m, n, i, p, q, cnt=0;
	min=10001;
	scanf("%d %d",&m,&n);
	for (i=m; i<=n; i++) {
		q= sosu(i);
		if (q==1) {
			if(min>i) {
				min=i;
			}
			cnt+=i;
		}
	}
	if (cnt>0) {
		printf("%d\n%d",cnt,min);
	} else {
		printf("-1");
	}
}