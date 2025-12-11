#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n,i=1,j=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<ch;
            ch+=1;
            j++;
        }
        ch='A'+i;
        cout<<endl;
        j=1;
        i++;
    }
}