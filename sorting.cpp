#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout << "Upper loop starts";
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            // cout << "Loop starts";
            if (arr[min] > arr[j])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
            // arr[i] = temp;
        }
    }
    // cout << "loop ends" << " ";
}

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n)
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
    // cout << "Enter the size of the array: ";
    int arr[5] = {3, 2, 14, 5, 6};

    // selection_sort(arr, 5);
    // bubble_sort(arr, 5);
    insertion_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << arr[0];
}