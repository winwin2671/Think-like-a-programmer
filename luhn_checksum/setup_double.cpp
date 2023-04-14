#include <iostream>
using std::cin;
using std::cout;

//check the double digit that are 10 and greater if yes return 1
int main()
{
    int digit;

    cout << "Enter a single digit number, 0-9:  ";
    cin >> digit;

    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10)
        sum = 1 + doubledDigit % 10;
    else
        sum = doubledDigit;

    cout << "Sum of digits in doubled numbers: " << sum << "\n";
}
