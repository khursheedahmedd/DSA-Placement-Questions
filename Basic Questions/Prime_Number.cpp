#include <iostream>

using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cout << "\nEnter a number: ";
    cin >> num;

    if (checkPrime(num))
        cout << "\nThe number is prime.";
    else
        cout << "\nThe number is not prime.";

    return 0;
}