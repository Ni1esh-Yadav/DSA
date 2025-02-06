#include <iostream>
#include <cmath>
using namespace std;

// method1
//  int decimal_to_binary(int num)
//  {
//      int binarynumber = 0;
//      int i = 0;
//      while (num > 0)
//      {
//          int digit = num % 2;
//          binarynumber = digit * pow(10, i++) + binarynumber;
//          num = num / 2;
//      }
//      return binarynumber;
//  }

// method2 using bitwise operator
// int decimal_to_binary(int num)
// {
//     int binarynum = 0;
//     int i = 0;
//     while (num > 0)
//     {
//         int digit = (num & 1);
//         binarynum = digit * pow(10, i++) + binarynum;
//         num = num >> 1;
//     }
//     return binarynum;
// }

// binary to digit conversion
// int binary_to_decimal(int num)
// {
//     int decimal = 0;
//     int i = 0;
//     while (num > 0)
//     {
//         int bit = num % 10;
//         decimal = decimal + bit * pow(2, i++);
//         num /= 10;
//     }
//     return decimal;
// }

int main()
{
    int num;
    cin >> num;
    // int binary_num = decimal_to_binary(num);
    // cout << binary_num;
    // int decima_num = binary_to_decimal(num);
    // cout << decima_num;
    return 0;
}