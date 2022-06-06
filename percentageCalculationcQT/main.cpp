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
    calculatePersentage(investments, rate, days);

    return 0;
}
