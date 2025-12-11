#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;

        //spaces
        while(j<=n-i){
            cout << " ";
            j++;
        }

        //first triangle
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //second triangle
        j=i-1;
        while(j>=1){
            cout<<j;
            j--;
        }

        i++;
        cout<<endl;
    }
}