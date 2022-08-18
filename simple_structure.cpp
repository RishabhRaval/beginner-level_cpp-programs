#include <iostream>
using namespace std;

struct phone
{
    double area;
    double exchng;
    double number;
};
int main()
{
    phone ph1 = {212, 767, 8900};
    phone ph2;

    cout << "\nEnter your area code, exchange, and number: ";
    cin >> ph2.area >> ph2.exchng >> ph2.number;

    cout << "\n My number is: (" << "" << ph1.area << ") " << "" << ph1.exchng << "-" << ph1.number;
    cout << "\n Your number is: (" << "" << ph2.area << ") " << "" << ph2.exchng << "-" << ph2.number;
    return 0;
}