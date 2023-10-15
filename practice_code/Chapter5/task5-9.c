//
// Created by 32186 on 2023/10/15.
//
#include <stdio.h>
int main(void)
{
  int year1, year2, month1, month2, day1, day2;
  printf("Please enter the first date (dd/mm/yy) :");
  scanf("%d/%d/%d", &day1, &month1, &year1);
  printf("Please enter the second date (dd/mm/yy) :");
  scanf("%d/%d/%d", &day2, &month2, &year2);

  if(year1 < year2)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day1, month1, year1, day2, month2, year2);
  else if(year2 < year1)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day2, month2, year2, day1, month1, year1);
  else if(month1 < month2)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day1, month1, year1, day2, month2, year2);
  else if(month2 < month1)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day2, month2, year2, day1, month1, year1);
  else if(day1 < day2)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day1, month1, year1, day2, month2, year2);
  else if(day2 < day1)
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d.", day2, month2, year2, day1, month1, year1);

  return 0;
}