#include <iostream>
using namespace std;

int findDupilacte(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        cout
            << ans << "\n";
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nThe dupilacte number is: " << findDupilacte(arr, size);

    return 0;
}
