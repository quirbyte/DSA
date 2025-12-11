#include <iostream>
using namespace std;
int main(){
    int n,i=1,j=1,val=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<" "<<val;
            j++;
            val++;
        }
        j=1;
        cout<<endl;
        i++;
    }
}