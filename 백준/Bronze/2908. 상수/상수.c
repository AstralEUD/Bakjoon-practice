#include <stdio.h>
int reverse(int a) {
	int x, y, res = 0; 
	y=100;
	while (a!=0) {
		res += (a%10) * y;
		y=y/10;
		a=a/10;
	}
	return res;
}
int main () {
	int a, b, ra, rb, n, i;
	scanf("%d %d",&a,&b);
	ra = reverse(a);
	rb = reverse(b);
	if (ra>rb) {
		printf("%d",ra);
	} else {
		printf("%d",rb);
	}
}