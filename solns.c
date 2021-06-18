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
