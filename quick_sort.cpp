#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start]; // fixing pivot element
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int PivotIndex = start + count;
    swap(arr[start],arr[PivotIndex]); //putting the pivot element in correct place
    // sorting left and right part
    int i = start, j = end;
    while (i < PivotIndex && j > PivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < PivotIndex && j > PivotIndex) // matching condition
        { 
            swap(arr[i++], arr[j--]);
        }
    }
    return PivotIndex;
}
void QuickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return; // base case
    }

    int p = partition(arr, start, end);

    QuickSort(arr, start, p - 1); // sort left part

    QuickSort(arr, p + 1, end); // sort right part
}
int main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    QuickSort(arr, 0, size - 1);
    cout << "Sorted array:";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}