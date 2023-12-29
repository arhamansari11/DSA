#include <iostream>
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

    int a = 4 << 2;
    cout << a;
}