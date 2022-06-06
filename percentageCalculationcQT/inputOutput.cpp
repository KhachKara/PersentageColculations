#include"inputOutput.h"
#include<iostream>
using namespace std;

void getParameters(int& investments, int& rate, int& days) {
    investments = 0;
    rate = 0;
    days = 0;
    cout << "How much investments you'll make?" << " ";
    cin >> investments;

    cout << "What the rate?" << " ";
    cin >> rate;

    cout << "How many days?" <<" ";
    cin >> days;
}

double calculatePersentage(int investments, int rate, int days) {
    double sum = investments;
    double totalProfit = 0;
    for(int i = 1; i <= days; ++i) {
        double profitPerday = sum * rate / 100 / 365.0;
        sum += profitPerday;
        cout << "Day " << i << ": " << sum << '\n';
    }
    totalProfit = sum - investments;
    cout << '\n';
    cout << "Total profit is: " << totalProfit<< '\n';
    return totalProfit;
}
