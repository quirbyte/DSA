#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[],int start,int end,int key){
    if(end<start){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    return true;
    else if(arr[mid]<key){
        return BinarySearch(arr,mid+1,end,key);
    }
    else{
        return BinarySearch(arr,start,mid-1,key);
    }
}
int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int arr[100];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched:";
    cin>>key;
    bool ans=BinarySearch(arr,0,size-1,key);
    if(ans){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}