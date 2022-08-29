#include <stdio.h>

void perfect(int n) {
  int i, sum = 0;

  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      sum = sum + i;
    }
  }
  if (sum == n)
    printf("PERFECT");
  else
    printf("NOT PERFECT");
}

int main(void) {

  int k;
  printf("ENTER A NUMBER =>> ");
  scanf("%d", &k);
  perfect(k);
  return 0;
}
