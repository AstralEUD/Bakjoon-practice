#include <stdio.h>
int main () {
	char a[105];
	int alphabet[50];
	int n, i;
	scanf("%s",&a[0]);
	for (i=0; i<=25; i++) {
		alphabet[i] = -1;
	}
	for (i=0; a[i] != '\0'; i++) {
		n = a[i] - '0';
		n-= 49;
		if (alphabet[n] == -1) {
			alphabet[n] = i;
		}
	}
	for (i=0; i<=25; i++) {
		printf("%d ",alphabet[i]);
	}
}