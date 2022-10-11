#include <stdio.h>
main () {
	char arr[100];
	int i, n, p, cnt;
	char res[100];
	scanf("%s",arr);
	cnt = 1;
	res[0] = arr[0];
	for (i=1; arr[i] != '\0'; i++) {
		if (arr[i] == '-') {
			res[cnt] = arr[i+1]; 
			cnt++;
		} 
	}
	for (i=0; res[i] != '\0'; i++) {
		printf("%c",res[i]);
	} 
}