#include <stdio.h>

main () {
	int n, i, cnt=0;
	scanf("%d",&n);
	for (i=1; i<=n; i*=10) {
		cnt+=n-i+1;
	}
	printf("%d",cnt);
}