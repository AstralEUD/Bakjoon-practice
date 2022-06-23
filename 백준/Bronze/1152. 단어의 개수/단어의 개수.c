int main () {
    char a[1000001];
    int i, cnt = 1;
    scanf("%[^\n]s",&a[0]);
    for (i=0; a[i]!='\0'; i++) {
        if (a[i] == ' ')cnt++;
    }
    if (a[0] == ' ') cnt--;
    if (a[i-1] == ' ') cnt--;
    //cnt--;
    //if (a[i] != ' ' && a[0] != ' ') cnt++;
    printf("%d",cnt);
}