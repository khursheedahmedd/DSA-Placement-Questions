#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
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

    swapAlternate(arr, size);

    cout << "\nThe After swapping with alternatives: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}