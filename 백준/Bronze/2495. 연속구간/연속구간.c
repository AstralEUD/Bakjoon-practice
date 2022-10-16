#include <stdio.h>
#include <string.h>
main () {
	int n, i, q, p, max, rmax;
	char arr[10];
	max=1;
	for (i=0; i<=2; i++) {
		rmax=1;
		gets(arr);
		for (q=0; q<8; q++) {
			if (arr[q] != arr[q-1]) {
				max=1;
			} else {
				max++;
				if (rmax < max) {
					rmax = max;
				}
			}
		}
		printf("%d\n",rmax);
	}
}