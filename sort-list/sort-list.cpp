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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *slow=head;
        ListNode *fast=head->next->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *r = sortList(slow->next);
        slow->next = NULL;
        ListNode *l = sortList(head);
        return merge(l, r);
    }
    
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy=new ListNode(0);
        ListNode *cur=dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                cur->next=l1;
                l1=l1->next;
            }
            else
            {
                cur->next=l2;
                l2=l2->next;
            }
            cur=cur->next;
        }
        
        if(l1==NULL)
            cur->next=l2;
        else
            cur->next=l1;
        return dummy->next;
    }
};