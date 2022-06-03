#ifndef IO_H
#define IO_H

int days(int startYear, int endYear, int startMonth, int endMonth, int startDay, int endDay);
void checking(int day, int month, int year);
int calulations(int money, int rate, int totalDays);
double dayProfit(int rate, int money = 1);

#endif