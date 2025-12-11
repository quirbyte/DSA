#include <iostream>
using namespace std;
bool isEven(int num)
{
    if (num & 1)
    {
        cout << "Number is Odd";
    }
    else
        cout << "Number is Even";
}
int main(){
    int num;
    cout<<"Enter the number to check:";
    cin>>num;
    isEven(num);
    return 0;
}