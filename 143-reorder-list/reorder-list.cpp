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
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* front = NULL;
        while(temp != 0){
            front = temp->next;
            temp->next = prev;
            prev= temp;
            temp = front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != 0 && fast->next->next != 0){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = reverselist(slow->next);
        slow->next = NULL;
        ListNode* first = head;
        while(second != 0){
            ListNode* newtemp1 = first->next;
            ListNode* newtemp2 = second->next;
            first->next = second;
            second->next = newtemp1;
            first = newtemp1;
            second = newtemp2;
        }
        //TLE
        // stack<int> ans;
        // while(reversehalf != 0){
        //     ans.push(reversehalf->val);
        //     reversehalf = reversehalf->next;
        // }
        // slow = head;
        // while(!ans.empty()){
        //     int n = ans.top(); 
        //     ans.pop();   
        //     ListNode* newnode = new ListNode(n);
        //     newnode->next = slow->next;
        //     slow->next = newnode;
        //     slow = newnode->next;
        // }
        // slow->next = NULL;
        

    }
};