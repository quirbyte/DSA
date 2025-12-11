#include <bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows:";
    cin>>row;
    int **jagged = new int *[row];
    int *col = new int[row];   // Array to store number of columns for each row
    for(int i=0;i<row;i++){
        cout<<"Enter number of columns for row "<<i+1<<":";
        cin>>col[i];
        jagged[i] = new int[col[i]];
    }
    cout<<"Enter elements of jagged array:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cin>>jagged[i][j];
        }
    }
    cout<<"Elements of jagged array are:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<jagged[i][j]<<" ";
        }
        cout<<endl;
    }
}