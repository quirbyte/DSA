#include <iostream>
using namespace std;
void revarr(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int arr[100];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    revarr(arr, size);
    cout << "Reversed array:";
    for (int i = 0; i < size; i++)
        cout << arr[i] <<" ";
    return 0;
}