// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     Switch Statement

//     int num;
//     cout << "Enter The Number : ";
//     cin >> num;
//     char ch = 'a';
//     switch (num)
//     {
//     case 1:
//         switch (ch)
//         {
//         case 'a':
//             cout << "It is nested Switch in case 1 ";
//             break;

//         default:
//             break;
//         }
//         break;
//     case 2:
//         cout << " Tueday ";
//         break;
//     case 3:
//         cout << " Wednesday ";
//         break;
//     case 4:
//         cout << " Thursday ";
//         break;
//     case 5:
//         cout << " Friday ";
//         break;
//     case 6:
//         cout << " Saturday ";
//         break;
//     case 7:
//         cout << " Sunday ";
//         break;

//     default:
//         cout << "Your number is greater than 7 and less than 0 ";
//         break;
//     }

//     while (1)
//     {
//         switch (1)
//         {
//         case 1:
//             cout << "I break the Infinite Loop ";

//             // Your condition to exit the loop
//             if (1)
//             {
//                 exit(0); // Exit the program
//             }

//             break;

//         default:
//             // Code for default case
//             break;
//         }

//         // Additional code if needed
//     }

//     return 0;

//     Calculator using Switch Statement

//     int num1, num2;
//     char opt;
//     cout << "Enter 1st Number : ";
//     cin >> num1;
//     cout << "Enter the 2nd Number : ";
//     cin >> num2;
//     cout << "Enter the Operator : ";
//     cin >> opt;
//     switch (opt)
//     {
//     case '+':
//         cout << num1 + num2;
//         break;
//     case '-':
//         cout << num1 - num2;
//         break;
//     case '*':
//         cout << num1 * num2;
//         break;
//     case '/':
//         cout << num1 / num2;
//         break;
//     case '%':
//         cout << num1 % num2;
//         break;

//     default:
//         cout << "Why my Calculator is not Working? ";
//         break;
//     }

// }

// Functions   =>  We use the function so we may use the code repeatidly

// #include <iostream>
// using namespace std;

//  Function of Power

// int power()
// {
//     int a;
//     cout << "Ente the Value of a ";
//     cin >> a;
//     int b;
//     cout << "Ente the Value of b ";
//     cin >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {

//     int ans = power();
//     cout << ans << endl;
// }

// #include <iostream>
// using namespace std;

// Function of Even or Odd

// bool isEven(int num1)
// {
//     if (num1 & 1)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     if (isEven(num))
//     {
//         cout << "Number is Even ";
//     }
//     else
//     {
//         cout << "Number is Odd ";
//     }
// }

// Funtion of NCR

// #include <iostream>
// using namespace std;
// // Function of Factorial

// int factorial(int num)
// {
//     int ans = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// // Function of Ncr
// int ncr(int n, int r)
// {
//     int numerator = factorial(n);
//     int denomiator = factorial(r) * factorial(n - r);
//     int fact = numerator / denomiator;
//     return fact;
// }

// int main()
// {
//     int n;
//     cout << "Enter the Value of n : ";
//     cin >> n;
//     int r;
//     cout << "Enter the Value of r : ";
//     cin >> r;
//     int ans = ncr(n, r);
//     cout << ans;
// }

// Function of Table

// #include <iostream>
// using namespace std;
// void couting(int n)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         int ans = n * i;
//         cout << ans << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cout << "Enter the Number of Table : ";
//     cin >> n;
//     couting(n);
// }

// Function of Prime or Even

// #include <iostream>
// using namespace std;
// bool isprime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the Number of : ";
//     cin >> n;
//     int ans = isprime(n);
//     cout << ans;
// }

// Home-work

// #include <iostream>
// using namespace std;
// int fb(int n)
// {
//     int num1 = 0;
//     int num2 = 1;
//     int ans;
//     cout << num1 << " " << num2;
//     for (int i = 3; i <= n; i++)
//     {
//         ans = num1 + num2;
//         cout << " " << ans << " ";
//         num1 = num2;
//         num2 = ans;
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cout << "Enter the Number : ";
//     cin >> n;
//     fb(n);
// }

// int ap(int n)
// {
//     int ans = 3 * n + 7;
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the Number : ";
//     cin >> n;
//     int newans = ap(n);
//     cout << "Your Nth Value is " << newans << endl;
// }

#include <iostream>
using namespace std;
// 1=>

// void update(int a)
// {
//     a = a / 2;
//     cout << a << endl;
// }
// int main()
// {
//     int a = 10;
//     update(a);
//     cout << a << endl;
// }


// 2=>

// int update(int a)
// {
//     a = a - 5;
//     return a;
// }
// int main()
// {
//     int a = 15;
//     int ans =update(a);
//     cout << ans << endl;
// }
