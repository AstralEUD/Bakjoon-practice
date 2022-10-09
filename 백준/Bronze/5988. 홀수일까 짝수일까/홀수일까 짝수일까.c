int main () {
	int n, a, i, p;
	char list[70];
	scanf("%d",&a);
	for (p=0; p<a; p++) {
		scanf("%s",list);
		for (i=0; list[i] != '\0'; i++) {}
		if (list[i-1]%2 == 0) {
			printf("even\n");
		} else {
			printf("odd\n");
		}
	}
}