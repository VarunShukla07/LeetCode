auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
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
    ListNode* reverselist(ListNode* head){
        if( head == 0 || head->next == 0) return head;
        ListNode* newhead = reverselist(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = 0;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != 0 && fast->next->next !=0){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverselist(slow->next);
        slow = head;
        ListNode* temp = newhead;
        while(temp != nullptr){
            if(slow->val != temp->val){
                newhead = reverselist(newhead);
                return false;
            }
            slow = slow->next;
            temp = temp->next;
        }
        newhead = reverselist(newhead);
        return true;
    }
};