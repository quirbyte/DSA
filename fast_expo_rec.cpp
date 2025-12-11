#include <bits/stdc++.h>
using namespace std;

int fast_expo(int base, int exp) {
    if(exp==0) {
        return 1;
    }
    if(exp%2==0) {
        return fast_expo(base,exp/2)*fast_expo(base,exp/2);
    }
    else {
        return base*fast_expo(base,exp-1);
    }
}

int main() {
    int base, exp;
    cout<<"Enter the base and exponent:";
    cin>>base>>exp;
    int res=fast_expo(base,exp);
    cout<<"The result is: "<<res;
    return 0;
}