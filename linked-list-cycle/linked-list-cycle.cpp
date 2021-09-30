/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *cur=NULL, *temp;
        while(head)
        {
            temp=head->next;
            head->next=cur;
            cur=head;
            head=temp;
        }
        return cur;
    }
    bool hasCycle(ListNode *head) {
        ListNode *rev=reverse(head);
        if(head && head->next && rev==head)
        {
            return true;
        }
        return false;
        
    }
};