int main () {
	int i, temp, avg = 0;
	for (i=0; i<5; i++) {
		scanf("%d",&temp);
		avg += temp * temp;
	}
	avg = avg % 10;
	printf("%d",avg);
}