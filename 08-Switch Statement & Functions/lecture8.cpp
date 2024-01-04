#include <iostream>
using namespace std;
int main()
{
    // Switch Statement & Functions

    int num;
    cout << "Enter The Number : ";
    cin >> num;
    char ch = 'a';
    switch (num)
    {
    case 1:
        switch (ch)
        {
        case 'a':
            cout << "It is nested Switch in case 1 ";
            break;

        default:
            break;
        }
        break;
    case 2:
        cout << " Tueday ";
        break;
    case 3:
        cout << " Wednesday ";
        break;
    case 4:
        cout << " Thursday ";
        break;
    case 5:
        cout << " Friday ";
        break;
    case 6:
        cout << " Saturday ";
        break;
    case 7:
        cout << " Sunday ";
        break;

    default:
        cout << "Your number is greater than 7 and less than 0 ";
        break;
    }
}