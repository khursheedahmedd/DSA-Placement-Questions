#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long int binary)
{
    int digit = 0;
    int decimal = 0;
    int i = 0;

    while (binary != 0)
    {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    long int binaryNumber;

    cout << "\nEnter a binary number: ";
    cin >> binaryNumber;

    cout << "\nThe given number in decimal is: " << binaryToDecimal(binaryNumber);

    return 0;
}