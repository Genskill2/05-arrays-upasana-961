#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
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
      j+=;
    }
  }
  return j;
}
