// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     int i=0,j=0,val=0;
//     while(i<=n){
//         while(j<=i){
//             cout<<char(65+val);
//             val++;
//             j++;
//         }
//         j=0;
//         cout<<endl;
//         i++;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(i*(i+1)/2 +j+65);
        }
        cout<<endl;
    }
}