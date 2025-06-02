# include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr) {
    long long sum = 0;
    for(auto it: arr) sum += it;
    cout << -sum << endl;
}

int main() {
    // Number of test cases
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr;

        while(n > 1) {
            int number;
            cin >> number;
            arr.push_back(number);
            n -= 1;
        }

        solution(arr);
    }
}