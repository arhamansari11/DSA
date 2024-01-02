#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // Bitwise Operator

    // 1-> And &   =>  1 1 => 1   and 0 1 => 0   nad 1 0 => 0
    // 2-> Or |    =>  1 1 => 1   and 0 1 => 1   nad 1 0 => 1 and 0 0 => 0
    // 3-> Not ~   =>  1's Complement System
    // 4-> Xor ^   =>  1 1 => 0   and 0 1 => 1   nad 1 0 => 1 and 0 0 => 0

    // int a = 3;
    // int b = 5;
    // cout << " " << (a & b) << endl;
    // cout << " " << (a | b) << endl;
    // cout << " " << ~b << endl;
    // cout << " " << (a ^ b) << endl;

    // Left Shift Operator
    // Symbol of left shift Operator is << It means we round the digits from left side
    // int a = 8 << 2;
    // cout << a << endl;

    // Right Shift Operator
    // Symbol of Right shift Operator is << It means we round the digits from Right side

    // int b = 4 >> 1;
    // cout << b;

    // Binary to Decimal

    // int n;
    // cout << "Enter the Binary Number : ";
    // cin >> n;
    // int ans = 0;
    // int power = 1;
    // while (n > 0)
    // {
    //     int digit = n % 10;
    //     ans = ans + (digit * power);
    //     power = power * 2;
    //     n = n / 10;
    // }
    // cout << ans << endl;

    // Decimal to binary

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int ans = 0;
    // int power = 1;
    // while (n > 0)
    // {
    //     int paritydigit = n % 2;
    //     ans = ans + (power * paritydigit);
    //     power = power * 10;
    //     n = n / 2;
    // }
    // cout << ans;
}