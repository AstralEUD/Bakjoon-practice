#include <stdio.h>
main () {
	int k, i, n, p, cnt = 0;
	int arr[100005];
	scanf("%d",&k);
	for (i=0; i<k; i++) {
		scanf("%d",&arr[i]);
		cnt+=arr[i];
		if (arr[i]==0) {
			for (p=i-1; arr[p]==0; p--) {}
			cnt-=arr[p];
			arr[p]=0;
		}
	}
	printf("%d",cnt);
}