#include <iostream>
using namespace std;

int reverseInteger(int x)
{
    int digit = 0;
    int reverse = 0;

    while (x != 0)
    {
        digit = x % 10;
        if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10))
        {
            return 0;
        }
        reverse = digit + (reverse * 10);
        x /= 10;
    }
    return reverse;
}

int main()
{
    int num;

    cout << "\nEnter a number: ";
    cin >> num;

    cout << "\nThe give number in reverse order is: " << reverseInteger(num);

    return 0;
}