#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

void checking(int day, int month, int year) {
	if((day > 30 || day < 0) || (month > 12 || month < 0) || (year > 2030 || year < 2022)) {
		cout << "Input correct date!" << '\n';
		cout << "The program will trminated." << '\n';
		abort();
	}
}

int days(int startYear, int endYear, int startMonth, int endMonth, int startDay, int endDay) {
	int amountDays = (endYear - startYear) * 365 + (endMonth - startMonth) * 30 + (endDay - startDay);
	if(amountDays > 0) {
		return amountDays;
	}
	cout << "Input correct date" << '\n';
	cout << "The program will trminated." << '\n';
	abort();
	return -1;
}

double dayProfit(int rate, int money = 1) {
	return  money * rate / 365.0;
}

int calulations(int money, int rate, int totalDays) {
	int sum = 0;
	for(int i = 0; i < totalDays; ++i) {
		sum += dayProfit(rate, money);
		money = sum;
	}
	return sum;
}