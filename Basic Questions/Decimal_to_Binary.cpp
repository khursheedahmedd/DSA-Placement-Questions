#include <iostream>
#include <cmath>

using namespace std;

long int decimalToBinary(int dec)
{
    int i = 0;
    int binary = 0;

    while (dec != 0)
    {
        int bit = dec & 1;

        binary = (bit * pow(10, i)) + binary;

        dec = dec >> 1;
        i++;
    }
    return binary;
}

int main()
{
    int num;

    cout << "\nEnter a decimal number: ";
    cin >> num;

    cout << "\nThe Binary of " << num << " is: " << decimalToBinary(num);

    return 0;
}