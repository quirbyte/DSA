#include <iostream>
using namespace std;
//calculates factorial
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
//calculates ncr
int ncr(int num1,int num2){
    int res=factorial(num1)/(factorial(num2)*factorial(num1-num2));
    return res;
}
int main(){
    int n,r;
    cout<<"Enter n and r";
    cin>>n>>r;
    int res=ncr(n,r);
    cout<<"The result is:"<<res;
}