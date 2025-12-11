#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr,int size){
    if(size==0||size==1)
    return;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    sortArray(arr,size-1);
}
int main() {
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int *arr=new int[size];
    cout<<"Enter array elements:";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    sortArray(arr,size);
    cout<<"Sorted array:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}