#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    cout<<"enter the range L and R: ";
    cin >> L >> R;

    vector<bool> isPrime(R + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= R; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= R; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = max(L, 2); i <= R; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
