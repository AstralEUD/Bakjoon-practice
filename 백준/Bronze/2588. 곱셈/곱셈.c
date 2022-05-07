#include <stdio.h>
int main () {
	int a, b, n1, n2, n3;
	scanf("%d %d",&a, &b);
	n1 = a * (b%10);
	n2 = (a * (b%100 - (b%10)))/10;
	n3 = a * (b/100);
	printf("%d \n%d \n%d \n%d",n1,n2,n3,a*b);
}