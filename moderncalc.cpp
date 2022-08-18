#include <iostream>
using namespace std;

int main()
{
up:
    float  num,num2,ans;
    char oper,ch;
    cout << "\nEnter first number, operator, second number: ";
    cin >> num;
    cin >> oper;
    cin >> num2;
    switch(oper)
    {
        case '+':
        ans = num+num2;
        break;

        case '-':
        ans = num-num2;
        break;

        case '/':
        ans = num/num2;
        break;

        case '*':
        ans = num*num2;
        break;

        default:
        cout << "\nPlease enter either +,-,/ or * operator.";
    }
    cout << "\nAnswer: " << ans;

    cout << "\nDo another (y/n)? ";
    cin >> ch;
    if(ch=='y')
    {
        goto up;
    }
    return 0;
}