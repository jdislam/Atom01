#include <stdio.h>

int prime(int n) {
  int i, count = 0;

  for (i = 2; i < n; i++) {
    if (n % i == 0)
      count++;
  }
  if (count == 0)
    return 1;
  else
    return 0;
}

int main(void) {
  int x, y, i;
  printf("ENTER THE UPPER AND LOWER LIMITS ==>  ");
  scanf("%d %d", &x, &y);
  for (i = x; i <= y; i++) {
    if (prime(i) == 1)
      printf("%d ", i);
  }
  return 0;
}
