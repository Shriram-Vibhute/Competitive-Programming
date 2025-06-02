# include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int n, int k) {
    // The solution id binary search
    for(int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
};

int main() {
    // Number of test cases
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr;

        while(n--) {
            int number;
            cin >> number;
            arr.push_back(number);
        }

        solution(arr, arr.size(), k);
    }
}