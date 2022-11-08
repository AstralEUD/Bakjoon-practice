#include <stdio.h>
#include <string.h>
main () {
	char arr[105];
	int n, i, r;
	gets(arr);
	for (i=0; i<strlen(arr); i++) {
		n = arr[i] - 0;
		if ((n<=90) && (n>=65)) {
			n = n-13;
			if (n<65) {
				r = n-65;
				//printf("%c %d : %c %d\n",n,n,90+r,90+r);
				n = 91+r;
			}
		} else if ((n>=97) && (n<=122)) {
			n=n-13;
			if (n<97) {
				r = n-97;
				n = 123+r;
			}
		}
		arr[i] = n;
	}
	printf("%s",arr);
}