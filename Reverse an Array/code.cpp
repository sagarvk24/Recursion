#include <iostream>
using namespace std;

// Recursion using 2 pointers
void reverseArray(int arr[], int l, int r)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);

    reverseArray(arr, l + 1, r - 1);
}

void reverse_Array(int arr[], int i, int size)
{
    if (i >= size / 2)
        return;

    swap(arr[i], arr[size - i - 1]);

    reverse_Array(arr, i + 1, size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // reverseArray(arr, 0, size - 1);
    reverse_Array(arr, 0, size);

    for (int num : arr)
        cout << num << " ";

    return 0;
}