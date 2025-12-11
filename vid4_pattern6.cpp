#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        char ch = 'A' + n - 1;
        while (col <= row) {
            cout << " " << ch;
            ch--;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
