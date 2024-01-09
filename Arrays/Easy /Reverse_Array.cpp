#include <iostream>

using namespace std;

void Reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter the values of the arra: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    Reverse(arr, size);

    cout << "\nThe reverse array is: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    // delete[] arr;

    return 0;
}