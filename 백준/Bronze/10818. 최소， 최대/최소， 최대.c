int main () {
	int a, max, min, n, i;
	int list[100];
	scanf("%d",&a);
	max = -1000000;
	min = 1000000;
	for (i=0; i<a; i++) {
		scanf("%d",&n);
		if (max < n) max=n;
		if (min > n) min=n;
	}
	printf("%d %d",min,max);
}