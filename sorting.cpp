#include <bits/stdc++.h>
using namespace std;

// //selection sort

// void selection_sort(vector<int> &v){
//     for(int i=0;i<v.size()-1;i++){
//         int min_index=i;
//         for(int j=i+1;j<v.size();j++){
//             if(v[min_index]>v[j])
//             min_index=j;
//         }
//         swap(v[i],v[min_index]);
//     }
// }

// //bubble sort

// void bubble_sort(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         bool swapped = false;
//         for(int j=0;j<(v.size()-i);j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false)
//             break;
//     }
// }

// // insertion sort

// void insertion_sort(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         int key = v[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (v[j] > key)
//             {
//                 v[j + 1] = v[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         v[j+1]=key;
//     }
// }

int main()
{
    vector<int> v;
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    cout << "Enter the elements:";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    // selection_sort(v);
    // bubble_sort(v);
    // insertion_sort(v);
    cout << "Elements in sorted order: ";
    for (int i = 0; i < size; i++)
        cout << v[i] << " ";
    return 0;
}
