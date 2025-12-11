#include <iostream>
using namespace std;
int main(){
    int n,i=1,j=1,val=1;
    cout<<"Enter the no. of rows:";
    cin>>n;
    while(i<=n){
        while(j<=i){
            cout<<" "<<val<<" ";
            j++;
            val++;
        }
        j=1;
        i++;
        val=i;
        cout<<endl;
    }
}



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n,val = 1;
//   cout<<"Enter the number of rows : ";
//   cin>>n;
//   n++;
//   for(int i = 1 ; i <= n ; i++){
//     for(int j = 1 ; j < i ; j++){
//       cout<< val << " ";
//       val = val +1;
//     }
//     val=i;
//     cout<< endl;
//   }
//   return 0;
// }