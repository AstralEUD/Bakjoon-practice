#include <stdio.h>

int main(void) {
	int a[100][100]={0};
	int max=0;
	int ga, se, i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
		scanf("%d", &a[i][j]);
    	if(a[i][j]>max){
    		max=a[i][j];
    		ga=i;
			se = j;
			}
    	}
	}
	printf("%d\n%d %d", max,ga+1,se+1);
}