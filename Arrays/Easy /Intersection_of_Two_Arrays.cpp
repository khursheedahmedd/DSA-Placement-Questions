#include <iostream>
using namespace std;

int *Intersection(int arr1[], int size1, int arr2[], int size2)
{
    int arr3[size1];
    int k = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
            }
        }
    }

    return arr3;
}

int main()
{
    int size1;
    cout << "\nEnter the size of the array 1: ";
    cin >> size1;
    int size2;
    cout << "\nEnter the size of the array 2: ";
    cin >> size2;

    int arr1[size1];
    int arr2[size2];

    cout << "\nEnter the values of the first array: ";
    for (int i = 0; i < size1; i++)
        cin >> arr1[i];

    cout << "\nEnter the values of the second array: ";
    for (int i = 0; i < size2; i++)
        cin >> arr2[i];

    int arr3[size1] = Intersection(arr1, arr2, size1, size2);
}