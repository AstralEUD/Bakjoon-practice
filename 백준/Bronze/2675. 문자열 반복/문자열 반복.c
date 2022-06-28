int main () {
    int n, i, p, casenum, v;
    char t[10] = {0};
    scanf ("%d",&casenum);
    for (v=0; v<casenum; v++){
    	scanf("%d %s",&n,t);
    	for (i=0; t[i]!='\0'; i++) {
    		for (p=0; p<n; p++) {
        		printf("%c",t[i]);
        	}
    	}
    	printf("\n");
    }
}