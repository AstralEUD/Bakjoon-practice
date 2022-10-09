int main () {
	int i, n, max = 0;
	double avg = 0;
	scanf("%d",&n);
	int list[n+1];
	for (i=0; i<n; i++) {
		scanf("%d",&list[i]);
		//avg += list[i];
		if (max < list[i]) max = list[i];
	}
	//printf("max %d avg %d\n",max,avg);
	for (i=0; i<n; i++) {
		avg += ((float)list[i] / (float)max) * 100;
		//printf("%f",avg);
	}
	avg = avg / (float)n;
	printf("%lf",avg);
}