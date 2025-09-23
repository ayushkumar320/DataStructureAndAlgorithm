#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while(x) {
            int rem = x % 10;
            x = x / 10;
            rev = rev*10 + rem; 
            if (rev > INT_MAX || rev < INT_MIN) return 0; 
        }
        return rev;
    }
};

// For overflow we need to check if the number exceeds the range of a 32-bit signed integer which is from -2,147,483,648 to 2,147,483,647. If it does, we return 0 as specified in the problem statement. Thats why we use INT_MAX and INT_MIN from the climits library.