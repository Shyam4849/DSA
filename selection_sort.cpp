#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) // Time complexity -> O(n^2) for all cases
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int n) // Time complexity -> O(n^2) for worst/average cases O(n) for best case
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }
}

void insertion_sort(int arr[], int n) // Time complexity -> O(n^2) for worst/average case, O(n) for best case
{
    cout << "i loop enters" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << "j Loop enters" << endl;
        int key = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                cout << "swaping" << endl;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // kuch error nhi hai

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}