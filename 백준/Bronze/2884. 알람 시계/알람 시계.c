int main () {
    int hour, minutes, p, i;
    scanf("%d %d",&hour,&minutes);
    p = minutes-45;
    if (p < 0) {
        hour--;
        minutes = 60+p;
    } else {
    	minutes = p;
	}
    if (hour == -1) {
        hour = 23;
    }
    printf("%d %d",hour,minutes);
}