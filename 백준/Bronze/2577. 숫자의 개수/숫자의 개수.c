int main () {
    int a, b, c, i, p;
    int cnt [12] = {0};
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    p = (a*b)*c;
    while (p != 0) {
        cnt[p%10] += 1;
        p=p/10;
    }
    for (i=0; i<=9; i++) {
        printf("%d\n",cnt[i]);
    }
}