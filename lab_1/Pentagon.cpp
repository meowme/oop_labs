#include "Pentagon.h"
#include <iostream>
#include <cmath>
using namespace std;

Pentagon::Pentagon(istream &is) {
    for (int i = 0; i < 5; i++) {
        is >> x[i];
        is >> y[i];
    }
    cout << endl;
}

double Pentagon::Square() {
    double result = 0, square = 0;
    int n = 5;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            square = x[i] * (y[n-1] - y[i+1]);
            result += square;
        } else if (i == n-1) {
            square = x[i] * (y[i-1] - y[0]);
            result += square;
        } else {
            square = x[i] * (y[i-1] - y[i+1]);
            result += square;
        }
    }
    cout << "Square is ";
    return abs(result / 2.0);
}

void Pentagon::Print() {
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " " << y[i] << endl;
    }
    cout << "Pentagon" << endl;
}

Pentagon::~Pentagon() {
    cout << "Pentagon deleted" << endl;
}
