#include <stdio.h>
main () {
	char array[150] = "";
	int ascii[30] = {0};
	int i, n, tmp, t2, q = 0;
	scanf("%d",&n);
	for(i=0; i<=30; i++) {
		ascii[i] = 0;
	}
	for (i=0; i<n; i++) {
		scanf("%s",&array[0]);
		tmp = array[0] - 97;
		t2 = ascii[tmp]; 
		t2++;
		ascii[tmp] = t2;
	}
	for(i=0; i<=30; i++) {
		if (ascii[i] >= 5) {
			printf("%c",(i + 97));
			q = 1;
		}
	}
	if (q==0) {
		printf("PREDAJA");
	}
}