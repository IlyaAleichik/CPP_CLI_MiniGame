//
// Created by aicgt on 5.08.21.
//

#include <iostream>

using namespace std;

int ExpensiveCalculator() {

    int x = 7,y = 3;

    cout << x << " + " << y << " = "<< x + y  << "\n";
    cout << x << " - " << y << " = "<< x - y  << "\n";
    cout << x << " * " << y << " = "<< x * y  << "\n";
    cout << x << " / " << y << " = "<< x / y  << "\n";
    cout << x << " / " << y << " = "<< x / (float)y  << "\n";
    cout << x << " % " << y << " = "<< x % y  << "\n";
    cout << x << " + " << y << "* 5 = " << x + y * 5  << "\n";
    cout << "(" << x << " + " << y << ") * 5" << " = "<< (x + y) * 5  << "\n";
    getchar();
    return 0;
}