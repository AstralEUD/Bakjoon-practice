int main () {
	int T, A, B, TEMP, n, i, q, p, STORE;
	scanf("%d",&T);
	for (i=0; i< T; i++) {
		scanf("%d %d",&A,&B);
		TEMP = A*B;
		q = (A>B) ? B : A;
		for (n=1; n<=q; n++) {
			if ((TEMP/n) % A == 0) {
				if ((TEMP/n) % B == 0) {
					STORE = TEMP/n;
				}
			}
		}
		printf("%d\n",STORE);
	}
}