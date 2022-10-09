#include <stdio.h>
main () {
	int i, n, size, q = 0;
	char input1[1010];
	char input2[1010];
	scanf("%d",&n);
	scanf("%s",&input1[0]);
	scanf("%s",&input2[0]);
	if ((n%2) == 0) {
		for (i=0; input1[i] != '\0'; i++) {
			if (input1[i] != input2[i]) {
				printf("Deletion failed");
				return 0;
			}
		}
	} else {
		for (i=0; input1[i] != '\0'; i++) {
			if (input1[i] == input2[i]) {
				printf("Deletion failed");
				return 0;
			}
		}
	}
	printf("Deletion succeeded");
}