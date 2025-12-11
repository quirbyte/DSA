#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, count = 0, t = 0;
    cout << "Enter size of the array:";
    cin >> size;
    int arr[100], unique[100];
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count != 0)
        {
            {
                unique[t] = arr[i];
                t++;
            }
        }
    }
    cout<<"Duplicate elements:";
    for (int k = 0; k < t; k++)
        cout << unique[k] <<" ";
}