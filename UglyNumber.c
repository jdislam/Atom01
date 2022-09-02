#include <stdio.h>
int isUgly(int i) {
  while (i % 2 == 0)
    i = i / 2;
  while (i % 3 == 0)
    i = i / 3;
  while (i % 5 == 0)
    i = i / 5;
  if (i == 1)
    return 1;
  else
    return 0;
}
int series(int n) {
  int i, cnt = 0, res;
  for (i = 1; cnt < n; i++) {
    res = isUgly(i);
    if (res == 1) {
      cnt++;
    }
    // printf("%d ", i);
    if (cnt == n)
      break;
  }
  printf("n th ugly is %d ", i);
}

int main() {
  int n;
  scanf("%d", &n);

  int res = series(n);
}
