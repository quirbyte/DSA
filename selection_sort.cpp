#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                min_idx = j;
            }
        }
        swap(v[i], v[min_idx]);
    }
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    vector<int> v;
    cout << "Enter array size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << i + 1 << " : ";
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    selection_sort(v);
    return 0;
}