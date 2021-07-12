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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head;
        for(int i=1; i<k; i++)
        {
            p=p->next;
        }
        
        ListNode *slow=head;
        ListNode *fast=p->next;
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        swap(p->val, slow->val);
        return head;
        
        
    }
};