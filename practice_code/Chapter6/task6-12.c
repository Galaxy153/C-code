//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{

  int i, denomination;
  float e, epsilon, term;

  printf("Enter epsilon :");
  scanf("%f", &epsilon);

  for (i = 1, denomination = 1, e = 1.0f, term = 1.0f; term > epsilon; i++)
  {
    term = (1.0f / (denomination *= i));
    e += term;
  }
  printf("Approximation of e: %f\n", e);

  return 0;
}
