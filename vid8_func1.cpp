#include <iostream>
using namespace std;
int pow(int x, int y){
    int res=1;
    for(int i=1;i<=y;i++){
        res*=x;
    }
    return res;
}
int main(){
    int x,y;
    cout<<"Enter the number and its power:";
    cin>>x>>y;
    int res=pow(x,y);
    cout<<"The result is:"<<res;
}