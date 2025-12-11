#include <iostream>
using namespace std;
int main(){
    int n,i=1,j=1,val=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while(i<=n){
        while(val>=j){
            cout<<val;
            val--;
        }
        cout<<endl;
        i++;
        val=i;
    }
}