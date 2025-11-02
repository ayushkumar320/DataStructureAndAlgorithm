#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &nums) {
  vector<int> positive, negative;

  for (int x : nums) {
    if (x >= 0) positive.push_back(x);
    else negative.push_back(x);
  }

  int i = 0, j = 0, k = 0;
  bool turnPos = true;

  while (j < positive.size() && k < negative.size()) {
    if (turnPos) nums[i++] = positive[j++];
    else nums[i++] = negative[k++];
    turnPos = !turnPos;
  }

  while (j < positive.size()) nums[i++] = positive[j++];

  while (k < negative.size()) nums[i++] = negative[k++];
}

int main() {
  vector<int> nums = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
  rearrange(nums);

  for (int x : nums) cout << x << " ";
  return 0;
}
