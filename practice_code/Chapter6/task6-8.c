//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{
  int day, day_1;
  printf("Please enter the number of days :");
  scanf("%d", &day);
  printf("What day of the week is the 1st (1=Sun, 7=Sat) :");
  scanf("%d", &day_1);

  printf("\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n");

  for (int i = 1; i < day_1; i++)
    printf("\t");

  for (int j = 1; j <= day; j++)
  {
    printf("%d\t", j);
    if ((j + day - 1) % 7 == 0)
      printf("\n");
  }

  printf("\n");
  return 0;
}