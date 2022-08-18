#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float ini_amt, yrs, rate, famt, n, elaps, tmp;
    cout << "\nEnter initial amount: ";
    cin >> ini_amt;
    cout << "\nEnter number of years: ";
    cin >> yrs;
    cout << "\nEnter interest rate (percent per year): ";
    cin >> rate;

    famt = ini_amt*(pow(1 + rate/100, yrs));

    cout << "\nAt the end of "<< yrs << " years, you will have " << famt << " dollars.";
    return 0;
}