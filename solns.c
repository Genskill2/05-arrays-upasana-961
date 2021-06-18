/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
float average(int a[], int n) {
  int i; float sum = 0;
  for(i = 0; i<n; i++) {
    sum+=a[i];
  }
  sum = sum/n;
  return sum;
}
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
      j++;
    }
  }
  return j;
}
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
#include <stdio.h>
#include <assert.h>
int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
int mode(int a[], int n) {
  int i, j;
  int maxcount = 0, maxvalue = 0;
  for(i=0; i<n, ++i) {
    int count = 0;
    for(j = 0; j<n; ++j) {
      if(a[i] == a[j])
        ++count;
    }
    if(count>maxcount) {
      maxcount = count;
      maxvalue = a[i];
    }
  }
    return maxvalue;
  }
