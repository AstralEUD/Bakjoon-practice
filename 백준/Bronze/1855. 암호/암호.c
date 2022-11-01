#include <stdio.h>
#include <string.h>
main () {
	char arr[205];
	char str[205];
	int n, i, p, q, r, s, t;
	scanf("%d",&n);
	scanf("%s",str);
	r=-1;
	for (i=0; i<strlen(str); i++) {
		if ((i%n) == 0) {
			r++;
		} 
		if ((r%2)==0) {
			s = (i%n) + r*n;
			arr[s] = str[i];
		} else {
			s = (n-(i%n)) + r*n -1;
			arr[s] = str[i];
		}
	}
	for (s=0; s<n; s++) {
		for (i=0; i<(strlen(str)/n); i++) {
			printf("%c",arr[(i*n)+s]);
		}
	}
}