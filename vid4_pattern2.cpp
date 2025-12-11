#include <iostream>
using namespace std;
int main(){
    int n,i=1,j=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while(i<=n){
        while(j<=i){
            cout<<" * ";
            j++;
        }
        j=1;
        i++;
        cout<<endl;
    }
}