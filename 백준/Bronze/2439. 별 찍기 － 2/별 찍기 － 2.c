int main () {
	int n, i, q;
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		for (q=1; q<=n-i; q++) {
			printf(" ");
		}
		for (q=1; q<=i; q++) {
			printf("*");
		}
		puts("");
	}
}