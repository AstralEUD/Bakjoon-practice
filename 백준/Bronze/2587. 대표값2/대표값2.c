#include <stdio.h>
main () {
	int list[10] = {0};
	int temp, n, i, avg, cen;
	avg = 0;
	for (i=0; i<=4; i++) {
		scanf("%d",&temp);
		avg+=temp;
		list[i] = temp;
	}
	avg = avg/5;
	for (i=3; i>0; i--) {
		for (n=0; n<=i; n++) {
			if (list[n] > list[n+1]) {
				temp = list[n];
				list[n] = list[n+1];
				list[n+1] = temp;
			}
		}
	}
	cen = list[2];
	printf("%d\n%d",avg,cen);
}