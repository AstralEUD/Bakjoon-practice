#include <stdio.h>
main () {
	int a, b, n, res;
	scanf("%d %d %d",&a,&b,&n);
	while (n!=0) {
		a = a%b;
		a = a*10;
		res = a/b;
		n--;
	}
	printf("%d",res);
}