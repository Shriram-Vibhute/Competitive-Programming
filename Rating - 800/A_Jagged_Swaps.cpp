# include <bits/stdc++.h>
using namespace std;

void jagged_swaps(vector<int> &arr, int n) {
    int arr_min = INT_MAX;
    for(auto it: arr) {
        arr_min = min(arr_min, it);
    }
    if(arr_min == arr[0]) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
};

int main() {
    // Number of Test Cases
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> permutations;
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            permutations.push_back(num);
        }
        jagged_swaps(permutations, n);
    }
    return 0;
}