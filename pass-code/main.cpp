#include <iostream>

using namespace std;

int main()
{
    string pass;
    string input = "HelloWorld";
    cout << "pass-code example making a password" << endl;
    cout << "Please enter a pass to access this : ";
    cin >> pass;

    if(pass == input) {
        cout << "hey that's right password, you made it!" << endl;
    } else
    {
        cout << "Wrong Password, 3x Retry : ";
        cin >> pass;
    }
    if (pass == injput) {
        cout << "hey that's right password, you made it!" << endl;
    } else
    {
        cout << "Wrong Password, 2x Retry : ";
        cin >> pass;
    }
    if (pass == input) {
        cout << "hey that's right password, you made it!" << endl;
    } else
    {
        cout << "Wrong Password, Last Chance or the console will closed : ";
        cin >> pass;
    }
    return 0;
}
