#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;

    cout << "enter the length of the array: "<<endl;
    cin >> n;

    int arr[n];  

    cout << "enter the elements inside the vector: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = INT_MIN;     
    int smax = INT_MIN;
    int ind=0;
    // find maximum
    for(int i = 0; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
            ind=i;
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
    //for check if the max element is as greater as twice of other elements in the array 
    if(mx >= 2*smax){
        cout<<"the max element is as greater as twice of all the other elements in the array and it's index is: "<<ind;
    }
    else{
        cout<<"-1"<<endl;
    }
    cout << "Maximum element: " << mx << endl;
    cout << "Second maximum element: " << smax << endl;

    return 0;
}
