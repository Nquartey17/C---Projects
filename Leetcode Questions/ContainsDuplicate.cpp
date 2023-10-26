#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicates;
        for (int i = 0; i < nums.size(); i++) {
            if (duplicates.count(nums[i]) > 0) {
                return true;
            }
            duplicates.insert(nums[i]);
        }
        return false;
    }
};

int main(int argc, char const *argv[]) { 
    return 0;
}

