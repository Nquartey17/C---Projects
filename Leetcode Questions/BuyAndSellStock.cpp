#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            else if (prices[i] - minPrice > maxPrice) {
                maxPrice = prices[i] - minPrice;
            }
        }
        return maxPrice;
    }
};

int main()
{
    vector<int> nums = {1,2};
    Solution sol;
    std::cout << sol.maxProfit(nums);
}