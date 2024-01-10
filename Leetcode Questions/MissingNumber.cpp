#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < length; i++) {
            if (i != nums[i]) {
                return i;
            } 
        }
        return length;
    }
};

int main()
{
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    Solution sol;
    cout << sol.missingNumber(nums);
}