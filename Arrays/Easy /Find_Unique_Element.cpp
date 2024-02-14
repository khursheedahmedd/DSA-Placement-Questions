#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
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
        cin >> arr[i];

    cout << "\nThe unique elements of the array is: " << findUnique(arr, size);

    return 0;
}