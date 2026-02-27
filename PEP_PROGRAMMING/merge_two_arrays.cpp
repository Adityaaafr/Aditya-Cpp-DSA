#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "enter the size of both the arrays: ";
    cin >> n >> m;

    int arr1[n], arr2[m];

    cout << "enter the elements in array 1: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "enter the elements in array 2: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr[n + m];
    int i = 0, j = 0, k = 0;

    
    while(i < n && j < m) {
        if(arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }


    while(i < n) {
        arr[k++] = arr1[i++];
    }

    
    while(j < m) {
        arr[k++] = arr2[j++];
    }

    cout << "Merged array: ";
    for(int x = 0; x < n + m; x++) {
        cout << arr[x] << " ";
    }

    return 0;
}
