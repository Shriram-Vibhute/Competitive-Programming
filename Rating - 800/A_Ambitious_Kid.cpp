# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>arr;
    while(n--) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // Finding the minimum element of an array
    int res = INT_MAX;
    for(auto it: arr) {
        res = min(res, abs(it));
    }
    cout << res << endl;

    return 0;
}