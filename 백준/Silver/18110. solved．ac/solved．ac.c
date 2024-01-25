#include <math.h>
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
short int arr[4000000];
void quick_sort(short int a[], int left, int right) {
  int i, j;
  short int pivot, temp;
  if (left < right) {
    i = left;
    j = right + 1;
    pivot = a[left];
    do {
      do
        i++;
      while (a[i] < pivot);
      do
        j--;
      while (a[j] > pivot);
      if (i < j)
        SWAP(a[i], a[j], temp);
    } while (i < j);
    SWAP(a[left], a[j], temp);
    quick_sort(a, left, j - 1);
    quick_sort(a, j + 1, right);
  }
  return;
}
int main() {
  long long int n, i;
  float t, avg;
  scanf("%lld", &n);
  if (n == 0) {
    printf("0");
  } else {
    for (i = 0; i < n; i++) {
      scanf("%hd", &arr[i]);
    }
    quick_sort(arr, 0, n - 1);
    t = roundf((float)n * 0.15);
    avg = 0;
    for (i = t; i < n - t; i++) {
      avg += arr[i];
    }
    avg = roundf(avg / (n - 2 * t));
    printf("%d", (int)avg);
  }
}