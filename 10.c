#include <stdio.h>

void armstrong(int n) {
  int sum = 0, temp, r;

  temp = n;

  while (temp != 0) {
    r = temp % 10;
    sum = sum + (r * r * r);
    temp = temp / 10;
  }

  if (sum == n)
    printf("Yes, it is a Armstrong Number\n");
  else
    printf("NO, it is not a Armstrong Number\n");
}

int main(void) {
  int k;
  printf("ENTER A NUMBER => ");
  scanf("%d", &k);
  armstrong(k);
  return 0;
}
