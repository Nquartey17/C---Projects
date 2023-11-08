#include <iostream>
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 1;
        ListNode * headCopy = head;
        while (headCopy->next != nullptr) {
            count = count + 1;
            headCopy = headCopy->next;
        }
        int total = count - n;
        ListNode * ans = head;
        while (total > 1) {
            total = total - 1;
            head = head->next;
        }
        
        if (head->next == nullptr) {
            return head;
        }
        else {
            head->next = head->next->next;
        }

        return ans;
        
    }
};

int main(int argc, char const *argv[]) {
    ListNode * node5 = new ListNode(5, nullptr);
    ListNode * node4 = new ListNode(4, node5);
    ListNode * node3 = new ListNode(3, node4);
    ListNode * node2 = new ListNode(2, node3);
    ListNode * node1 = new ListNode(1, node2);
    Solution sol;
    sol.removeNthFromEnd(node1, 5);
    return 0;
}
