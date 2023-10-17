//
// Created by 32186 on 2023/10/15.
//
#include <stdio.h>
int main(void)
{
  float largest = 0.0f;
  float num = 0.0f;

  do
  {
    printf("Please enter a number :");
    scanf("%f", &num);
    if (num > largest)
      largest = num;
  }
  while (num > 0);

  printf("\nThe largest number entered was %f\n", largest);

  return 0;
}