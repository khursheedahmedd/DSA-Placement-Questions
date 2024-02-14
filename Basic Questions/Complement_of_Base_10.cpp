#include <iostream>
#include <cmath>

using namespace std;

int Complement(int n)
{
    int m = n;
    int k = 0;

    if (n == 0)
        return 1;
    while (m != 0)
    {
        k = (k << 1) | 1;
        m = m >> 1;
    }
    return (~n) & k;
}

int main()
{
    int num;
    cout << "\nEnter a number: ";
    cin >> num;

    cout << "\nThe complement of given integer is: " << Complement(num);

    return 0;
}