#include <iostream>
using namespace std;
int fib(int num){
    num--;
    int x=0,y=1,sum=0;
    if(num<=1)
    return num;
    for(int i=2;i<=num;i++){
        sum=x+y;
        x=y;
        y=sum;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter no. of term:";
    cin>>n;
    int res= fib(n);
    cout<<"The number at position "<<n<<" is: "<<res;
}