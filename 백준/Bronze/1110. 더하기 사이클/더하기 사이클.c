#include <stdio.h>
int main () {
	int tmp, n, i, q, p, r, cnt = 0;
	scanf("%d",&n);
	tmp = n;
	p = n%10;
	q = n%10 + n/10;
	n = (p%10)*10 + q%10;
	//printf("%d\n",n);
	cnt++;
	while (n != tmp) {
		p = n%10;
		q = n%10 + n/10;
		n = (p%10)*10 + q%10;
		cnt++;
	}
	printf("%d",cnt);
}