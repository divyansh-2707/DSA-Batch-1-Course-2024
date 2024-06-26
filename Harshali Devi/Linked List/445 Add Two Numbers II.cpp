//Day 17
//Question 79
//https://leetcode.com/problems/add-two-numbers-ii/description/

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = reverse(l1);
        ListNode* head2 = reverse(l2);

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;

        while (head1 != nullptr || head2 != nullptr || carry != 0) {
            int sum = carry;
            if (head1 != nullptr) {
                sum += head1->val;
                head1 = head1->next;
            }
            if (head2 != nullptr) {
                sum += head2->val;
                head2 = head2->next;
            }
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        ListNode* result = reverse(dummy->next);
        delete dummy;  // Clean up the dummy node
        return result;
    }
};
