// Find the first non-repeating element in a given array arr of integers and if
// there is not present any non-repeating element then return 0
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(vector<int>& arr) {
    map<int, int> hashmap;
    for (int i = 0; i < arr.size(); i++) {
        hashmap[arr[i]]++;
    }
    for (int x : arr) {
        if (hashmap[x] == 1) return x;
    }
    return 0;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 2};
    int res = firstNonRepeating(nums);
    cout << res;
    return 0;
}