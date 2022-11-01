#include <stdio.h>
struct std {
	int country, num, score;
};
struct std data[100];
void swap(int a, int b) {
	struct std tmp;
	tmp = data[a];
	data[a] = data[b];
	data[b] = tmp;
}
main () {
	int n, i, p, q, bronze = 0;
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		scanf("%d %d %d",&data[i].country, &data[i].num, &data[i].score);
	}
	for (p=0; p<n; p++) {
		for (q=0; q<n-p-1; q++) {
			if (data[q].score < data[q+1].score) {
				swap(q, q+1);
			}
		}
	}
	/* To check sort
	printf("\n");
	for (i=0; i<n; i++) {
		printf("%d %d %d",data[i].country,data[i].num,data[i].score);
	}
	printf("\n");
	*/	
	p=2;
	if (data[0].country == data[1].country) {
		while (bronze == 0) {
			if (data[p].country != data[0].country) {
				bronze=p;
			}
			p++;
		}
	} else {
		bronze=2;
	}
	printf("%d %d\n%d %d\n%d %d",data[0].country,data[0].num,data[1].country,data[1].num,data[bronze].country,data[bronze].num);
}