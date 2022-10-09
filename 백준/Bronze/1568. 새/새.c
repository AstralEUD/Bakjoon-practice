#include <stdio.h>
main () {
	int i, n, cnt, time = 0;
	long long int q;
	scanf("%lld",&q);
	cnt=0;
	time=-1;
	while (q>0) {
		if (q>=cnt) {
			q-=cnt;
			time++;
			if(q==0) break;
			cnt++;
		} else {
			cnt=1;
		}
		//printf("[%d] %d %d\n",q,cnt,time);
	}
	printf("%d",time);
}