#include <stdio.h>
#include <assert.h>


int min(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
int min(int a[], int n) {
  int i, x = a[0];
  for(i = 0; i<n; i++) {
    if(x>a[i])
      x = a[i];
  }
  return x;
}
