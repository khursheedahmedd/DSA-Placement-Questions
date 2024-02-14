#include <iostream>

using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    uint32_t num;

    cout << "\nEnter a number: ";
    cin >> num;

    cout << "\nNumber of 1 bits are: " << hammingWeight(num);

    return 0;
}