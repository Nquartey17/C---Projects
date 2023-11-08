#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int num = 0;
        for (int i = digits.size()-1; i >= 0; i--) {
            num = (num * 10) + digits[i];
        }
        num = num + 1;
        int numCopy = num;
        int length = 0;
        while (numCopy != 0) {
            int value = numCopy % 10;
            numCopy = numCopy / 10;
            ans.push_back(value);
        }
        return ans;
    }
};

int main()
{
    vector<int> digits = {1,2,3};
    Solution sol;
    
}
