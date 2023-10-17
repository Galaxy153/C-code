//
// Created by 32186 on 2023/10/15.
//
#include <stdio.h>
int main(void)
{
  int m, n, r;
  printf("Please enter two digits (separate by a space) :");
  scanf("%d %d", &m, &n);
  while (n != 0)
  {
    r = m % n;
    m = n;
    n = r;
  }
  printf("Greatest common divisor : %d", m);
  return 0;
}