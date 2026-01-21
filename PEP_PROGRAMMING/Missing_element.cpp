#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number upto which you want to check the missing number: ";
    cin >> n;

    int arr[n-1];
    int sum = 0, sum2 = 0;

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Enter the numbers in the array: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum2 += arr[i];
    }

    cout << "The missing number is: " << sum - sum2;
    return 0;
}
