//https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* current = dummyHead;
        int carry = 0;

        while (p != nullptr || q != nullptr || carry != 0) {
            int x = (p != nullptr) ? p->val : 0;
            int y = (q != nullptr) ? q->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;

            if (p != nullptr) p = p->next;
            if (q != nullptr) q = q->next;
        }

        return dummyHead->next;
    }
};
