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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode = new ListNode();
        ListNode* curr = dummynode;
        int carry = 0;
        while( l1 != 0 || l2 != 0 || carry){
            int sum = 0;
            if(l1 != 0){ sum = sum + l1->val;l1 = l1->next; }
            if(l2 != 0){ sum = sum + l2->val;l2 = l2->next; }
            sum +=carry;
            carry = sum/10;
            ListNode* newnode = new ListNode(sum%10);
            curr->next = newnode;
            curr = curr->next;
        }
        return dummynode->next;
    }
};