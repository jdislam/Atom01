#include <stdio.h>

void strongNumber(int n) {
  int i, r, sum = 0, shift;
  long fact;

  shift = n;

  while (n > 0) {
    r = n % 10;

    fact = 1;
    for (i = 1; i <= r; i++) {
      fact = fact * i;
    }
    sum = sum + fact;
    n = n / 10;
  }

  if (sum == shift)
    printf("YES STRONG NUMBER");
  else
    printf("NOT STRONG NUMBER");
}

int main(void) {
  int k;
  printf("ENTER THE NUMBER =>> ");
  scanf("%d", &k);
  strongNumber(k);
  return 0;
}
