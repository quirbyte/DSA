#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // copying values
    for (int i = 0; i < len1; i++)
        arr1[i] = arr[start + i];

    for (int i = 0; i < len2; i++)
        arr2[i] = arr[mid + 1 + i];

    // merge 2 sorted arrays
    int i = 0, j = 0, k = start;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }

    while (i < len1)
        arr[k++] = arr1[i++];

    while (j < len2)
        arr[k++] = arr2[j++];
    delete []arr1;
    delete []arr2;
}

void MergeSort(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start >= end)
        return;     //base case
    // sorting left part
    MergeSort(arr, start, mid);  //recursive call
    // sorting right part
    MergeSort(arr, mid + 1, end); //recursive call
    // merging
    Merge(arr, start, end);
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
    MergeSort(arr, 0, size - 1);
    cout << "Sorted array:";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}