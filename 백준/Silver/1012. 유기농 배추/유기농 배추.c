#include <stdio.h>
int arr[55][55] = {0,0};
void search (int x, int y) {
	arr[x][y] = 2;
	if (arr[x+1][y] == 1) {
		search(x+1,y);
	}
	if (arr[x][y+1] == 1) {
		search(x,y+1);
	}
	if (arr[x-1][y] == 1) {
		search(x-1,y);
	}
	if (arr[x][y-1] == 1) {
		search(x,y-1);
	}
}

main () {
	int t, m, n, k, x, y, i, j, cnt=0;
	scanf("%d",&t);
	for (i=0; i<t; i++) {
		scanf("%d %d %d",&m,&n,&k);
		cnt=0;
		for (j=0; j<k; j++) {
			scanf("%d %d", &x, &y);
			arr[x][y] = 1;
		}
		for (x=0; x<m; x++) {
			for (y=0; y<n; y++) {
				if (arr[x][y] == 1) {
					cnt++;
					search(x,y);
				}
			}
		}
		printf("%d\n",cnt);
	}
}