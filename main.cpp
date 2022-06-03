#include "io.h"
#include<iostream>
using namespace std;

int main () {
	cout << "Percentage Colcolations"<< '\n';
	cout << '\n';
	cout << "How much days?" << '\n';

	cout << "Enter START DATE (date format - dd mm yyyy)" << '\n';
	int startDay, startMonth, startYear;
	cin >> startDay >> startMonth >> startYear;
	checking(startDay, startMonth, startYear);

	cout << "Enter END DAATE (date format - dd mm yyyy)" << '\n';
	int endDay, endMonth, endYear;
	cin >> endDay >> endMonth >> endYear;
	checking(endDay, endMonth, endYear);

	int totalDays = days(startYear, endYear, startMonth, endMonth, startDay, endDay);

	cout << totalDays << " days" <<'\n';
	cout << "Enter amount of investments: " <<'\n';
	int money;
	cin >> money;

	cout << "Enter rate per year: " <<'\n';
	int rate;
	cin >> rate;
	double dayProfit(int rate, int money = 1);
	cout << "Profit per day: " << dayProfit(rate) << '\n';
	cout << "Profit: " << calulations(money, rate, totalDays) << '\n';
	return 0;
}