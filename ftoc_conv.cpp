#include <iostream>
using namespace std;

int main()
{
    int ch;
    float f,c;
    cout << "\nType 1 to convert Fahrenheit to Celsius,";
    cout << "\n     2 to convert Celsius to Fahrenheit: ";
    cin >> ch;
    if(ch==1)
    {
        cout << "\nEnter temperature in Fahrenheit: ";
        cin >> f;
        c = ((f-32.0)*(5.0/9.0));
        cout << "\nIn Celsius that's " << c;
    }
    else
    {
        cout << "\nEnter temperature in Celsius: ";
        cin >> c;
        f = (c*(9.0/5.0)+32.0);
        cout << "\nIn Fahrenheit that's " << f;
    }
    return 0;
}