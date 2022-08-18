#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cout << "\nEnter number: ";
    cin >> a;
    for(int i=1; i<=200; i++)
    {
        cout << setw(5) << a*i;
        if(i%10==0)
        {
            cout << endl;
        }
    }

    return 0;
}