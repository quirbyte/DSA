#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> v, int size, int target)
{
    sort(v.begin(), v.end());
    int start = 0;
    int end = size-1;
    while (start <= end)
    {
        //int mid = (start + end) / 2;
        //more optimised
        int mid=start+((end-start)/2);
        if (v[mid] == target)
            return mid;
        else if (target < v[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int size, element, target;
    cout << "Enter no. of elements:";
    cin >> size;
    vector<int> v;
    cout << "Enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    cout << "Enter no. to find:";
    cin >> target;
    int idx = binary_search(v, size, target);
    if (idx == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << idx << endl;
    }
    return 0;
}