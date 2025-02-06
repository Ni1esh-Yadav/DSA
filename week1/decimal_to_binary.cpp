#include <iostream>
#include <cmath>
using namespace std;

int decimal_to_binary(int num)
{
    int binarynumber = 0;
    int i = 0;
    while (num > 0)
    {
        int digit = num % 2;
        binarynumber = digit * pow(10, i++) + binarynumber;
        num = num / 2;
    }
    return binarynumber;
}

int main()
{
    int num;
    cin >> num;
    int binary_num = decimal_to_binary(num);
    cout << binary_num;
    return 0;
}