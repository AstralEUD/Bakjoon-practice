#include <stdio.h>





main () {
	int n, m, i, j, x, y, p, q, k;
	int arr[305][305];
	scanf("%d %d",&n,&m);
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&k);
	for (p=0; p<k; p++) {
		scanf("%d %d %d %d",&i,&j,&x,&y);
		i--; j--; x--; y--;
		q=0;
		for (n=i; n<=x; n++) {
			for (m=j; m<=y; m++) {
				q+=arr[n][m];	
			}
		}
		printf("%d\n",q);
	}
}