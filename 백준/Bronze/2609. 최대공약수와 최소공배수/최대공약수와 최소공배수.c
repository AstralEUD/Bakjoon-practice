int main () {
	int T, A, B, TEMP, n, i, q, p, STORE, STORE2, v;
	scanf("%d %d",&A,&B);
	TEMP = A*B;
	q = (A>B) ? B : A;
	for (i=1; i<=q; i++) {
		if ((A%i == 0) && ((B%i) == 0)) {
			STORE2 = i;
		}
	}
	printf("%d\n",STORE2);
	for (n=1; n<=q; n++) {
		if ((TEMP/n) % A == 0) {
			if ((TEMP/n) % B == 0) {
				STORE = TEMP/n;
			}
		}
	}
	printf("%d\n",STORE);
}