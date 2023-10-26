#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i+1] > prices[i]) {
                total = total + (prices[i+1] - prices[i]);
            }
        }
        return total;
    }
};


int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    Solution sol;
    std::cout << sol.maxProfit(nums);
}


