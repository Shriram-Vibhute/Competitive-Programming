# include <iostream>
#include <bits/stdc++.h>
using namespace std;

void halloumi_boxes(vector<int>& arr, int& k) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end()); // Applying STL function to sort the array
    if(arr == sorted_arr || k > 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    // Number of Test-Cases
    int t;
    cin >> t; 

    while(t--){
        // Taking Inputs
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i]; 
        }

        // Solution Function
        halloumi_boxes(arr, k);
    }

    return 0;
}