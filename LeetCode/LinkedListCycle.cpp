// (141) Linked List Cycle
// 11ms (48.93%)
// 8.66MB (26.01%)

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(head == nullptr) {
                return false;
            }

            ListNode* slow = head;
            ListNode* fast = head->next;

            while(slow != fast) {
                if(fast == nullptr || fast->next == nullptr) {
                    return false;
                }

                slow = slow->next;
                fast = fast->next->next;
            }

            return true;
        }
}