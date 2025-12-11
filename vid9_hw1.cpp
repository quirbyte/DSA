#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter array elements:";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    for(int i=0;i<size;i+=2)
    swap(arr[i],arr[i+1]);
    cout<<"After alternate swap:";
    for(int i=0;i<size;i++)
    cout<<arr[i];
    return 0;
}