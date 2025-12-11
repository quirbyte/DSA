#include <bits/stdc++.h>    
using namespace std;
void SayDigits(int n,string arr[]){
    if(n==0){    //base case
        return;
    }
    int digit = n%10;
    n = n/10;
    SayDigits(n,arr);//recursive call
    cout<<arr[digit]<<" ";
} 
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    SayDigits(n,arr);
    return 0;
}
