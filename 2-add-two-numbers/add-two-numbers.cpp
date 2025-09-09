/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbersRec(ListNode* l1, ListNode* l2, int carry) {
        if (!l1 && !l2 && carry == 0)
            return nullptr;

        int sum = carry;
        if (l1)
            sum += l1->val;
        if (l2)
            sum += l2->val;

        ListNode* node = new ListNode(sum % 10);

        node->next = addTwoNumbersRec(l1 ? l1->next : NULL,
                                      l2 ? l2->next : NULL, sum / 10);
        return node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoNumbersRec(l1, l2, 0);
    }
};