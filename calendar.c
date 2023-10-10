//
// Created by 32186 on 2023/10/12.
//
#include <stdio.h>
int main(void) {
  int year = 0, month = 0, day = 0, day_input_year = 0;
  printf("Please enter the year : ");
  scanf("%d", &year);
  printf("Please enter the month : ");
  scanf("%d", &month);
  printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
  for (int i = 1; i < year; i++) // 将输入年份之前的天数求和
  {
    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) // 判断是否为闰年
      day += 366;
    else
      day += 365;
  }
  for (int j = 1; j <= month; j++) // 判断月份
  {
    switch (j) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      day_input_year = 31;
      break;
    case 2:
      if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // 判断是否为闰年
        day_input_year = 29;
      else
        day_input_year = 28;
      break;
    default:
      day_input_year = 30;
      break;
    }
    if (j < month)
      day += day_input_year; // 将输入年份的天数加到总天数中
  }

  int t = 0;
  t = day % 7;
  for (int l = 0; l < t; l++)
    printf("\t");

  for (int k = 1; k <= day_input_year; k++) // 输出本月日历
  {
    printf("%d\t", k);
    if ((k + day) % 7 == 0)
      printf("\n");
  }

  printf("\n");
  return 0;
}