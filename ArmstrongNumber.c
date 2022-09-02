#include <stdio.h>
int powerr(int last, int dg) {
  int i, p = 1;
  for (i = 1; i <= dg; i++)
    p = p * last;
  return p;
}
arms(int n) {
  int temp, org;
  temp = org = n;

  int dg = 0, i;
  for (i = 1; n != 0; i++) {
    n = n / 10;
    dg++;
  }

  int last, sum = 0;
  while (temp != 0) {
    last = temp % 10;
    temp /= 10;
    sum = sum + powerr(last, dg);
  }
  if (sum == org)
    printf("Arm-strong\n");
  else
    printf("not Arm-strong\n");
}
int main() {
  int n;
  scanf("%d", &n);
  arms(n);
}
