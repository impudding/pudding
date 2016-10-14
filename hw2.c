 1 #include<stdio.h>
  2 #include<stdlib.h>
  3 
  4 int count, i, feb_days, n, year, space_JAN;
  5 
  6 int leapyear(int feb_days, int year)//計算是否為閏年
  7 {
  8   if (year % 4 == 0 && year % 400 == 0)
  9     feb_days = 29;
 10 
 11   else feb_days = 28;
 12 
 13   return feb_days;
 14 }
 15 
 16 
 17 int space_J(int space_JAN)
 18 {
 19   for (space_JAN = 1, count = 0; count < (year - 1900); count++)
 20      if (year % 4 == 0 && year % 400 == 0)
 21      space_JAN = (space_JAN + 366) % 7;
 22      else
 23      space_JAN = (space_JAN + 365) % 7;
 24 
 25   return space_JAN;
 26 }
 27 
 28 int main(int argc, char *argv[])
 29 {
 30   int year = atoi (argv[1]), month = atoi (argv[2]);
 31   int m_days[] = {0, 31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 32   int space[13] = {0,space_JAN};
 33 
 34   printf("      %d年%d月\n\n", year, month);
 35   printf(" 日  一  二  三  四  五  六 \n");
 36 
 37 
