#include"inputOutput.h"
#include<iostream>
using namespace std;

void getParameters(int& investments, int& rate, int& days)
{
    investments = 0;
    rate = 0;
    days = 0;
    cout << "Investments" <<" ";
    cin >> investments;

    cout << "Rate" <<" ";
    cin >> rate;

    cout << "Days" <<" ";
    cin >> days;
}

double calculatePercentage(const int investments, const int rate, const int days)
{
    double sum = investments;
    double totalProfit = 0;
    for(int i = 1; i <= days; ++i)
    {
        double profitPerDay = sum * rate / 100 / 365.0;
        sum += profitPerDay;
        cout << "Day " << i << ": " << sum << '\n';
    }
    totalProfit = sum - investments;
    cout << '\n';
    cout << "Total Profit: " << totalProfit<< '\n';
}
