/* Enter your solutions in this file */
#include <stdio.h>
float average(int a[], int n) {
  int i; float sum = 0;
  for(i = 0; i<n; i++) {
    sum+=a[i];
  }
  sum = sum/n;
  return sum;
}
int factors(int n, int a[]) {
  int i, j = 0;
  int x = n;
  for(i = 2; i<=n; i++) {
    if (n%i==0) {
      a[j] = i;
      printf("%d %d %d", j, n, a[j]);
      n = n/i;
      i = 1;
      j++;
    }
  }
  return j;
}
int max(int a[], int n) {
  int i, x = a[0];
  for(i = 0; i<n; i++) {
    if(x<a[i])
      x = a[i];
  }
  return x;
}
int min(int a[], int n) {
  int i, x = a[0];
  for(i = 0; i<n; i++) {
    if(x>a[i])
      x = a[i];
  }
  return x;
}
