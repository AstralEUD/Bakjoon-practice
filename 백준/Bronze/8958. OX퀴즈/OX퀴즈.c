#include <stdio.h>
#include <string.h>
int main () {
	int a, b, n, i, p;
	char input[85];
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%s",input);
		a=0;
		b=0;
		for (p=0; p<strlen(input); p++) {
			if (input[p] == 'O') {
				b++;
			} else {
				b = 0;
			}
			a += b;
		}
		printf("%d\n",a);
	}
}