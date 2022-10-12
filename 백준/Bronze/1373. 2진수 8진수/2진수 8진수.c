#include <stdio.h>
#include <string.h>
char bin[1000005];
int arr[1000005];
main () {
	int i, q, length, cnt, tmp;
	scanf("%s",bin);
	length = strlen(bin);
	cnt=0;
	for (i=length-1; i>=0; i-=3) {
		tmp=0;
		if (bin[i] == '1') {
			tmp+=1;
		}
		if (bin[i-1] == '1') {
			tmp+=2;
		}
		if (bin[i-2] == '1') {
			tmp+=4;
		}
			arr[cnt] = tmp;
		//printf("[%d/%d]%c%c%c = %d %d\n",length,i,bin[i],bin[i-1],bin[i-2],tmp,arr[cnt]);1
		cnt++;
	}
	for (i=cnt-1; i>=0; i--) {
		printf("%d",arr[i]);
	}
}