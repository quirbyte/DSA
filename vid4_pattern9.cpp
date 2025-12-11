#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    n++;
    while (i < n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        
        j = i - 1;
        while (j >= 1)
        {
            cout << "*";
            j--;
        }

        j = 2;
        while (j <= i)
        {
            cout << "*";
            j++;
        }

        j = n - i + 1;
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        i++;
        cout << endl;
    }
}