#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = nullptr;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        // Plan this out before continuing
        while (head1->next != nullptr || head2->next != nullptr) {
            if (head1->val <= head2->val) {
                
            } else {

            }
        }
        
        
        return ans;
    }
};

// list1 = [1,2,4], list2 = [1,3,4]
// [1,1,2,3,4,4]