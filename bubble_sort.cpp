#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v){
    for(int i=0;i<v.size();i++){

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
    bubble_sort(v);
    return 0;
}