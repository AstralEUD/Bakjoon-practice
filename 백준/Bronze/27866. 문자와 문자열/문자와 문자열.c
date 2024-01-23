#include <stdio.h>
char a[1005];
int main() {
  int b;
  scanf("%s\n%d", a, &b);
  printf("%c", a[b-1]);
}