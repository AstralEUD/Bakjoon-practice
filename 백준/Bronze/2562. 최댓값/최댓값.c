int main () {
    int i, n, max, maxn;
    int list[10];
    for (i=0; i<9; i++) {
        scanf("%d",&list[i]);
    }
    max = list[0];
    maxn = 1;
    for (i=1; i<9; i++) {
        if (max < list[i]) {
            max = list[i];
            maxn = i+1;
        }
    }
    printf("%d\n%d",max,maxn);
}