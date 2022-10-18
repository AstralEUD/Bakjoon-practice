#include <stdio.h>
#include <string.h>
main () {
	char arr[105];
	int n, i, q, p, cnt, chk, len, v;
	scanf("%d",&n);
	cnt=0;
	for (i=0; i<=n; i++) {
		gets(arr);
		v=0;
		int apa[30] = {0};
		len = strlen(arr);
		for (q=0; q<=len; q++) {
			//apa[arr[q] - 97] = 1; 
			if ((apa[arr[q] - 97] == 0) && (arr[q+1] != arr[q])) {
				chk=0;
				for (p=q+1; p<=len; p++) {
					if (arr[q] == arr[p]) {
						chk=1;
						p=len-1;	
					}
					//printf("[%d] %c %c 검사 == %d\n",p,arr[q],arr[p],chk);
				}
				if (chk!=0) {
					v=1;
					//printf("[%d] %s\n",i,arr);
				}
				apa[arr[q] - 97] = 1; 
			}
		}
		if (v==0) {
			cnt++;
		}
	}
	printf("%d",cnt-1);
}