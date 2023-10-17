//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{
  int n = 0;
  double e = 0;
  printf("Please enter a digit :");
  scanf("%d", &n);
  for (int i = 1, denominator = 1; i <= n; i++)
  {
    e += 1.0 / (denominator *= i);
  }
  printf("Approximation of e : %lf\n", e);
  return 0;
}