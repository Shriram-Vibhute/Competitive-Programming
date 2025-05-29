# include <iostream>
# include <bits/stdc++.h>
using namespace std;

void harbour_space(vector<int> &arr, int n, int x) {
    int min_volumn = INT_MIN, curr_distance = 0;
    for (int i = 1; i < n; i++) {
        if(i == n - 1) {
            curr_distance = 2 * (arr[i] - arr[i-1]);
        }
        else {
            curr_distance = arr[i] - arr[i-1];
        }
        min_volumn = max(curr_distance, min_volumn);
    }
    cout << min_volumn << endl;
};

int main(){
    // Number of test cases
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        // Inputes
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        arr.emplace_back(0); // Adding starting point
        for(int j = 1; j <= n; j++) {
            int point;
            cin >> point;
            arr.emplace_back(point);
        }
        arr.emplace_back(x); // Adding ending point

        // Solution
        harbour_space(arr, arr.size(), x);
    }

    return 0;
};