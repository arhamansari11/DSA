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

    // Left Shift Operator
    // Symbol of left shift Operator is << It means we round the digits from left side
    // int a = 8 << 2;
    // cout << a << endl;

    // Right Shift Operator
    // Symbol of Right shift Operator is << It means we round the digits from Right side

    // int b = 4 >> 1;
    // cout << b;

    // Increament , Decreament

    // int i = 8;
    // cout << i++ << endl;
    // cout << ++i << endl;
    // cout << i-- << endl;
    // cout << --i << endl;

    // 5 Questions;

    // 1st

    // int a, b = 1;
    // a = 10;
    // if (++a)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << ++b;
    // }

    // 2nd Question,

    // int a = 1;
    // int b = 2;
    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage-1 Inside If" << endl;
    // }
    // else
    // {
    //     cout << "Stage-2 Inside Else";
    // }
    // cout << a << "" << b << endl;

    // 3rd Questions,

    // int a = 1;
    // int b = 2;
    // if (a-- > 0 || ++b > 2)
    // {
    //     cout << "Stage-1 Inside If" << endl;
    // }
    // else
    // {
    //     cout << "Stage-2 Inside Else";
    // }
    // cout << a << endl << b << endl;

    // 4th Questions,

    // int num = 3;
    // cout << (25 * (++num));

    // 5th Question,

    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b << endl;
    // cout << c;

    // For Loop

    // int n;
    // cout << "Enter the Number";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // Pattern using For Loop

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     for (int space = row - 1 ; space; space--)
    //     {
    //         cout << " *";
    //     }

    //     cout << endl;
    // }

    // For Loop Question

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum << endl;

    // Fibonacci Series

    // int n = 10;
    // int a = 1;
    // int b = 2;
    // cout << a << " " << b << " ";
    // for (int i = 1; i <= n; i++)
    // {
    //     int nextnum = a + b;
    //     cout << nextnum << " ";
    //     a = b;
    //     b = nextnum;
    // }

    // Prime Number

    // int n ;
    // cout << "Enter the Number : ";
    // cin >> n;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not a Prime Number" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Prime Number" << endl;
    //         break;
    //     }
    // }

    // Continue

    // for (int i = 1; i <= 2; i++)
    // {
    //     cout << "Hello" << endl;
    //     cout << "Hey" << endl;
    //     continue;
    //     cout << "ۨۨHello its end";
    // }

    // For Loop

    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    // Leetcode Question-1

    // class Solution
    // {
    // public:
    //     int subtractProductAndSum(int n)
    //     {
    //         int prod = 1;
    //         int sum = 0;
    //         while (n != 0)
    //         {
    //             int rem = n % 10;
    //             prod = prod * rem;
    //             sum = sum + rem;
    //             n = n / 10;
    //         }
    //         int answer = prod - sum;
    //         return answer;
    //     }
    // };

    // Leetcode Question-2

    //     class Solution {
    // public:
    //     int hammingWeight(uint32_t n) {
    //     int count = 0;
    //         while(n!=0){
    //         if(n&1){
    //             count ++ ;
    //         }
    //             n = n>>1;
    //         }

    //     return count ;
    //     }
    // };
}
