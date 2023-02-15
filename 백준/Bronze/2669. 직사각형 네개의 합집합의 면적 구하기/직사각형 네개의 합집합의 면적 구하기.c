#include <stdio.h>

main () {
	int n, i, x1, y1, x2, y2, p, q, cnt=0;
	int arr[105][105] = {0,0};
	for (i=0; i<4; i++) {
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(p=x1; p<x2; p++) {
			for (q=y1; q<y2; q++) {
				if (arr[p][q] == 0) {
					arr[p][q] = 1;
					cnt++;
				}
			}
		}
	}
	printf("%d",cnt);
}