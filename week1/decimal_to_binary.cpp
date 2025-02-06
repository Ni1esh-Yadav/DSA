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
int decimal_to_binary(int num)
{
    int binarynum = 0;
    int i = 0;
    while (num > 0)
    {
        int digit = (num & 1);
        binarynum = digit * pow(10, i++) + binarynum;
        num = num >> 1;
    }
    return binarynum;
}

int main()
{
    int num;
    cin >> num;
    int binary_num = decimal_to_binary(num);
    cout << binary_num;
    return 0;
}