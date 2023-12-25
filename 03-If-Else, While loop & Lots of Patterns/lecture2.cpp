#include <iostream>
using namespace std;

int main()
{
    // 1 => Check Wether the Number is positive oe negative?

    // int a;
    // cout << "Enter the value of a:";
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "The value of a is : " << a << " and a is positive" << endl;
    // }
    // else if (a < 0)
    // {
    //     cout << "The value of a is : " << a << " and a is negative" << endl;
    // }
    // else
    // {
    //     cout << "The value of a is : " << a << " and a is zero" << endl;
    // }
    // return 0;

    // cin.get =>   We use Cin.get to input the values of  "Space" , "Enter" , "Tab"

    // 2=> Check a and b are equal or greater and less than with each other.

    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // if (a > b)
    // {
    //     cout << "The value of a is : " << a << " and a is greater than b" << endl;
    // }
    // else if (a < b)
    // {
    //     cout << "The value of b is : " << b << " and b is greater than a " << endl;
    // }
    // else
    // {
    //     cout << "a and b are equal " << endl;
    // }

    // 3=> Check wether the input is digit , upper case alphabet and lower case alphabet
    char ch;
    cout << "Enter the value of ch: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "Your ch is Numeric" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Your ch is Lower Case Alphabet" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Your ch is Upper Case Alphabet" << endl;
    }
    else
    {
        cout << "Your ch is neither a digit nor an alphabet letter" << endl;
    }

    return 0;
}
