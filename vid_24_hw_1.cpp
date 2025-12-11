#include <iostream>
using namespace std;

// Function to calculate factorial modulo (10^9 + 7)
long long factorialMod(int n, int mod) {
    long long result = 1;  // Use long long for large results
    for (int i = 1; i <= n; i++) {
        result = (result * i) % mod; // Update result modulo mod
    }
    return result;
}

int main() {
    const int MOD = 1000000007;  // 10^9 + 7
    int n = 212;

    // Calculate 212! % MOD
    long long answer = factorialMod(n, MOD);
    cout << "212! % (10^9 + 7) = " << answer << endl;

    return 0;
}