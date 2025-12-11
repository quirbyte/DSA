#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int key=v[i];
        int j=i-1;
        for(;j>=0;j--){
            if(v[j]>key){
                //shifting
                v[j+1]=v[j];
            }
            else{
                //already sorted
                break;
            }
        }
        v[j+1]=key;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<v.size();i++){	
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    vector<int> v;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    insertion_sort(v);
    return 0;
}