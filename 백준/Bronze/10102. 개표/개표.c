int main () {
	int n, i, v, as, bs;
	char a[15];
	as = 0;
	bs = 0;
	scanf("%d",&v);
	scanf("%s",&a[0]);
	for (i=0; i<v; i++) {
		if (a[i] == 'A') {
			as++;
		} else {
			bs++;
		}
	}
	if (as>bs) {
		printf("A");
	} else if (bs>as) {
		printf("B");
	} else {
		printf("Tie");
	}
}