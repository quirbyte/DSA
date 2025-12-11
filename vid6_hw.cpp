#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    int bin = 0, i = 1;
    int absN = abs(n);

    while (absN > 0) {
        bin += (absN % 2 * i);
        absN /= 2;
        i *= 10;
    } 

    if (n >= 0) {
        cout << "Binary equivalent: " << bin << endl;
    } else {
        int negbin = 0;
        int j = 1;
        for (int k = 0; k < 8; ++k) {
            int bit = bin % 10;
            if (bit == 0)
                negbin += 1 * j;
            else
                negbin += 0 * j;
            bin /= 10;
            j *= 10;
        }
        negbin += 1;
        cout << "Negative binary equivalent: " << negbin << endl;
    }

    return 0;
}
