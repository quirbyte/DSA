#include <iostream>
using namespace std;
int main(){
    int n,sum=0,i=1;
    cout<<"Enter the value of n";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Sum of natural numbers from 1 to "<<n<<" is "<<sum;
    return 0;
}