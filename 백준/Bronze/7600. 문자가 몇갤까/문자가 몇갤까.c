#include <stdio.h>
#include <string.h>
int main () {
	char a[255];
	char alphabet [130];
	int i, n, cnt, length;
	while (gets(a) != -1) {
		if (a[0] == '#') break;
		cnt = 0;
		length = strlen(a) + 1;
		for (i=0; i<=40; i++) {
			alphabet[i] = 0;
		}
		for (i=0; i!=length; i++) {
			n = a[i] - '0';
			if ((n <= 74) && (n >= 49)) n-=32;
			n-=17;
			if ((alphabet[n] == 0) && (n <=25) && (n >= 0)) {
				cnt++;
				alphabet[n] = 1;
			}
		}
		printf("%d\n",cnt);
	}
}