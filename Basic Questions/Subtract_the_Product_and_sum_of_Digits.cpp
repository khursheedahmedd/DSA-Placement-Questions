#include <iostream>

using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int prod = 1;
    int digit = 0;

    while (n != 0)
    {
        digit = n % 10;
        n /= 10;
        sum += digit;
        prod *= digit;
    }

    return prod - sum;
}

int main()
{
    int num;

    cout << "\nEnter a number: ";
    cin >> num;

    cout << "\nThe subtraction of product and sum of digits is: " << subtractProductAndSum(num);

    return 0;
}