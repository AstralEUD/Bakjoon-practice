#include <stdio.h>
int main () {
    char a[1000005];
    int b[27] = {};
    int i, up;
    char temp = 0;
    char answer;
    scanf("%s",a);
    for (i=0; i<=27; i++) b[i] = 0;
    for (i=0; a[i] != '\0'; i++) {
        if (a[i] >= 'a') {
            temp = a[i] - 32;
        } else {
        	temp = a[i];
		}
        temp -= 65;
        b[temp] += 1;
        //printf("a[temp] = %c, %d\n",a[i],temp);
    }
   // for (i=0; i<=27; i++) printf("%d = %d \n",i,b[i]);
    up = b[0];
    answer = 'A';
    for (i=1; i<=27; i++) {
        if (up == b[i]) {
			answer = '?';
			//printf(" ?? %d\n",i);
		} else if (up < b[i]) {
        	up = b[i];
        	answer = i + 65;
		}
		//printf("%c %d %d up \n",answer, i, up);
    }
    printf("%c",answer);
}