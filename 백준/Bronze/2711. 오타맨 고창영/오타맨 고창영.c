#include <stdio.h>
#include <string.h>
main () {
	int n, i, q, len, p;
	char arr[100];
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d",&q);
		gets(arr);
		len = strlen(arr);
		for (p=1; p<len; p++) {
			if (p != q) {
				printf("%c",arr[p]);
			} 
		}
		printf("\n");
	}
}