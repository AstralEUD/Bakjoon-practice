#include <stdio.h>
long long GCD (long long a, long long b) {
	if (a<b) {return GCD(a, b%a);}
	if (b==0) { return a;}
	GCD(b, a%b);
}
main () {
	long long int a, b, r, res;
	scanf("%lld %lld",&a,&b);
	r = GCD(a, b);
	res = (a*b)/r;
	printf("%lld",res);
}