#include <iostream>
using namespace std;

void maxAndMin(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "\nThe maximum element in array is: " << max;
    cout << "\nThe minimum element in array is: " << min;
}

int main()
{
    int size;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    maxAndMin(arr, size);

    delete[] arr;

    return 0;
}