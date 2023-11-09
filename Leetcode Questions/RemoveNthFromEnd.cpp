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
        int count = 0;
        ListNode * headCopy = head;
        ListNode * cur = head;

        // Count how many nodes are in Linked List
        while (headCopy) {
            headCopy = headCopy->next;
            count++;
        }

        int total = count - n;
        int i = 1;
        
        // find the nth from end node
        while (cur->next && i < total) {
            cur = cur->next;
            i++;
        }
        
        //remove first node
        if (total == 0) {
            head = head->next;
        }
        //skip n from end node
        else {
            cur->next = cur->next->next;
        }

        return head;
        
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
