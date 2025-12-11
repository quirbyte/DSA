#include <bits/stdc++.h>
using namespace std;
int getmaxelement(int arr[],int size){
    int max= INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getminelement(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
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
    int max= getmaxelement(arr,size);
    int min= getminelement(arr,size);
    cout<<"Maximum element is "<<max<<endl;
    cout<<"Minimum element is "<<min<<endl;
    return 0;
}