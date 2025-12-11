#include <iostream>
using namespace std;
int main(){
    int amt,r100=0,r50=0,r20=0,r1=0;
    cout<<"Enter total amount:";
    cin>>amt;
    while(amt>0){
        if(amt>=100){
            r100=amt/100;
            amt%=100;
        }
        if(amt>=50 && amt<100){
            r50=1;
            amt-=50;
        }
        if(amt>=20 && amt<50){
            r20++;
            amt-=20;
        }
        else{
            r1++;
            amt-=1;
        }
    }
    cout<<"100 notes="<<r100<<", 50 notes="<<r50<<", 20 notes="<<r20<<", 1 note="<<r1;
    return 0;
}