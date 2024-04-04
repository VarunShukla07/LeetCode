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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> values;
        if(!head -> next) return head;
        ListNode *cur = head;
        ListNode *cur2 = head;
        for(int i = 1; i < left; i++)
        {
            cur = cur -> next;
            cur2 = cur2 -> next;
        }
        for(int i = left; i <= right; i++)
        {
            values.push_back(cur -> val);
            cur = cur -> next;
        }
        for(int i = values.size() -1; i >= 0; i--)
        {
            cur2 -> val = values[i];
            cur2 = cur2 -> next;
        }
        return head;
    }
};