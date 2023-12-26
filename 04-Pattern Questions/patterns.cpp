#include <iostream>
using namespace std;

int main()
{
    // Pattern 1

    // int n;
    // cout << "Enter the number:";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
    // return 0;

    // Pattern 2

    // int n;
    // cout << "Enter the Number:";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
    // return 0;

    // Pattern 3

    // int n;
    // cout << "Enter the Number:";
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count;
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // Pattern 4

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int i = 1;
    // char star = '*';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << star;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // Pattern 5

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // Pattern 6

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // int count = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << count;
    //         count = count + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 7

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int count = row;
    //     while (col <= row)
    //     {
    //         cout << count;
    //         count = count + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 8
    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row - col + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 9

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char start = 'A' + row - 1;
    //         cout << start;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 10

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // char start = 'A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << start;
    //         start = start + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 11

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 12
    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char ch = 'A' + row -1;
    //     while (col <= row)
    //     {
    //         cout << ch;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 13
    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // char ch = 'A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 14

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char ch = 'A' + row + col - 2;
    //     while (col <= row)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 15

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char ch = 'A' + n - row;
    //     while (col <= row)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Pattern 16

    // int n;
    // cout << "Enter the Number : ";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // Patter 17

    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
