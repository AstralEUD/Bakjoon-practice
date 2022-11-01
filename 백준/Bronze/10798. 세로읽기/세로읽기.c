#include <stdio.h>
#include <string.h>
main () {
	char arr[100][100];
	int n, i, p, max = 0;
	for (i=0; i<5; i++) {
		scanf("%s",arr[i]);
		n = strlen(arr[i]);
		if (n > max) max=n;
	}
	p=0;
	for (i=0; i<max; i++) {
		for (n=0; n<5; n++) {
			if (arr[n][p] != '\0') {
				printf("%c",arr[n][p]);
			}
		}
		p++;
	}
}