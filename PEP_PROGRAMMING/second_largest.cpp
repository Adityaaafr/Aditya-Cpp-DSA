#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;

    cout << "enter the length of the array: ";
    cin >> n;

    int arr[n];  

    cout << "enter the elements inside the vector: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = INT_MIN;     
    int smax = INT_MIN;

    // find maximum
    for(int i = 0; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }

    // find second maximum
    for(int i = 0; i < n; i++) {
        if(arr[i] == mx) {
            continue;
        }
        if(arr[i] > smax) {
            smax = arr[i];
        }
    }

    cout << "Maximum element: " << mx << endl;
    cout << "Second maximum element: " << smax << endl;

    return 0;
}
