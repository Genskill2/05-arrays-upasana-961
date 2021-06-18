#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int a[], int n) {
  int i, x = a[0];
  for(i = 0; i<n; i++) {
    if(x<a[i])
      x = a[i];
  }
  return x;
}
