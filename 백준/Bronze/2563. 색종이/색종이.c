#include <stdio.h>
main () {
	int arr[102][102] = {0};
	int n, i, p, q, r, s, cnt=0;
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d %d",&p,&q);
		for (r=p; r<(p+10); r++) {
			for (s=q; s<(q+10); s++) {
				if (arr[s][r] == 0) {
					arr[s][r] = 1;
					cnt++;
				}
			}
		}
	}
	
	/*for (i=0; i<=100; i++) {
		for (n=0; n<=100; n++) {
			printf("%d ",arr[i][n]);
		}
		printf("\n");
	}*/
	printf("%d",cnt);
}