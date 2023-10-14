//
// Created by 32186 on 2023/10/14.
//
#include<stdio.h>
int main(void)
{
  int user_time, hour, minute;
  int d1 = 8 * 60, d2 = 9 * 60 + 43, d3 = 11 * 60 + 19, d4 = 12 * 60 + 47,
      d5 = 14 * 60, d6 = 15 * 60 + 45, d7 = 19 * 60, d8 = 21 * 60 + 45;

  printf("Please enter a 24-hour time :");
  scanf("%d:%d", &hour, &minute);
  user_time = hour * 60 + minute;

  if (user_time <= d1 + (d2 - d1) / 2)
    printf("Closest departure time is 8:00 a.m. , arriving 10:16 a.m.");
  else if (user_time <= d2 + (d3 - d2) / 2)
    printf("Closest departure time is 9:43 a.m. , arriving 11:52 a.m.");
  else if (user_time <= d3 + (d4 - d3) / 2)
    printf("Closest departure time is 11:19 a.m. , arriving 1:31 p.m.");
  else if (user_time <= d4 + (d5 - d4) / 2)
    printf("Closest departure time is 12:47 a.m. , arriving 3:00 p.m.");
  else if (user_time <= d5 + (d6 - d5) / 2)
    printf("Closest departure time is 2:00 p.m. , arriving 4:08 p.m.");
  else if (user_time <= d6 + (d7 - d6) / 2)
    printf("Closest departure time is 3:45 p.m. , arriving 5:55 p.m.");
  else if (user_time <= d7 + (d8 - d7) / 2)
    printf("Closest departure time is 7:00 p.m. , arriving 9:20 p.m.");
  else if (user_time <= d8)
    printf("Closest departure time is 9:45 p.m. , arriving 11:58 p.m.");
  else
    printf("Sorry you've missed all the flights today.");

  return 0;
}