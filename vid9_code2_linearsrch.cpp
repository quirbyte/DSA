#include <bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int srch,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==srch)
        return true;
    }
    return false;
}
int main(){
    int size,target;
    cout<<"Enter the size of an array:";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element:";
    cin>>target;
    if(linear_search(arr,target,size))
    cout<<"Element is present!!!";
    else
    cout<<"Element is absent!!!";
    return 0;
}