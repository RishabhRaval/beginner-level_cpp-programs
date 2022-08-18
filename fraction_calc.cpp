#include <iostream>
using namespace std;

int main()
{
up:
    float n1, d1 ,n2, d2;
    char op1, op2, oper, chose;
    cout << "\nEnter First number(with divide operator), operator, Second number(with divide operator): ";
    cin >> n1;
    cin >> op1;
    cin >> d1;
    cin >> oper;
    cin >> n2;
    cin >> op2;
    cin >> d2;
    
    switch(oper)
    {
        case '+':
        cout << "\nAddition of two numbers: " << ((n1*d2 + n2*d1)/(d1*d2));
        break;

        case '-':
        cout << "\nSubtraction of two numbers: " << ((n1*d2 - n2*d1)/(d1*d2));
        break;

        case '*':
        cout << "\nMultiplication of two numbers: " << ((n1*n2)/(d1*d2));
        break;

        case '/':
        cout << "\nDivision of two numbers: " << ((n1*d2)/(d1*n2));
        break;

        default:
        cout << "\nPlease enter correct operator. ";
    }

    cout << "\nWant to continue ?(type y for YES and n for NO)";
    cin >> chose;
    if(chose == 'y')
    {
        goto up;
    }
    return 0;
}