#include <iostream>
using namespace std;
int setbits(int num1, int num2)
{
    int count = 0;
    while (num1 || num2)
    {
        int bit1 = num1 & 1;
        int bit2 = num2 & 1;
        if (bit1 == 1)
            count++;
        if (bit2 == 1)
            count++;
        num1 = num1 >> 1;
        num2 = num2 >> 1;
    }
    return count;
}
int main()
{
    int a, b, res;
    cout << "Enter the no.s";
    cin >> a >> b;
    res = setbits(a, b);
    cout << "The no. of set bits in a and b are:" << res;
}