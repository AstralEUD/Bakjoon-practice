int main () {
	int n[45] = {0};
	int i, p, cnt = 0;
	for (i=0; i<=9; i++) {
		scanf("%d",&p);
		n[p%42] = n[p%42] + 1;
	}
	for (i=0; i<=42; i++) {
		if (n[i] >= 1) {
			cnt++;
		}
	}
	printf("%d",cnt);
}