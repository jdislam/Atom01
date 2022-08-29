#include <stdio.h>

int getTheSum(int n) {
  int i, sum = 0;
  for (i = 1; i <= n; i++) {
    sum = sum + i;
  }
  return sum;
}

int main(void) {
  int k;
  printf("ENTER THE NUMBER FOR SUM =>> ");
  scanf("%d", &k);
  printf("THE SUM FROM 1 TO %d IS => %d", k, getTheSum(k));

  return 0;
}
