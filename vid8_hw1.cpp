#include <iostream>
using namespace std;
int main(){
    int num=1;
    while(num>0){
        int num=1;
        switch(num){
            case 1:
            cout<<"Number is 1"<<endl;
            exit(0);
            case 2:
            cout<<"Number is 2"<<endl;
            exit(0);
            default:
            cout<<"This is default case";
        }
    }
}