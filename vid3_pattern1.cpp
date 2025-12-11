#include <iostream>
using namespace std;
int main(){
    int n,i=1,j=1;
    cout<<"Enter the number of rows:";
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<i;
            j++;
        }
        j=1;
        cout<<endl;
        i++;
    }
}