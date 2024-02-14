#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    cout << "\nEnter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << "\nThe given number is power of two.";
    else
        cout << "\nThe given number is not power of two.";

    return 0;
}