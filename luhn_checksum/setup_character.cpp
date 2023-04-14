#include <iostream>
using std::cin;
using std::cout;

//calculates the sum of the ASCII value of the character entered
int main()
{
    char digit;

    cout << "Enter a single digit number, 0-9:  ";
    digit = cin.get();

    int sum = digit;
    //print out ASCII value of the character entered
    cout << "Is the sum of digits " << sum << "? \n";
}
