#include"../inputOutput.h"
#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    int investments;
    int rate;
    int days;

    getParameters(investments, rate, days);
    cout << '\n';
    calculatePercentage(investments, rate, days);

    system("pause>null");
    return 0;
}
