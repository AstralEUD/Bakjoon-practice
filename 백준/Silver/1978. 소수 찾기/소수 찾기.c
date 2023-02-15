#include <stdio.h>
#include <math.h>
int sosu (int p) {\
	int i = 2;
	if (p<2) return 0;
                  //제곱근까지만 확인, 1은 소수가 아니므로 제외
	for (i=2; i<=sqrt(p); i++) {
		if (p%i==0) return 0; 	
	}
	return 1;
}


main () {
	int n, i, q, cnt = 0;
	int arr[105];
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for (i=0; i<n; i++) {
		q= sosu(arr[i]);
		if (q==1) cnt++;
		q=0;
	}
	printf("%d",cnt);
}