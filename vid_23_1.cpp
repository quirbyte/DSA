#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row size and column size: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    }
    int largest_row_sum = INT_MIN;
    for(int i=0;i<row;i++){
        int rowSum=0;
        for(int j=0;j<col;j++){
            rowSum+=arr[i][j];
        }
        largest_row_sum=max(largest_row_sum,rowSum);
    }
    cout<<"Largest Row Sum is: "<<largest_row_sum;
    return 0;
}