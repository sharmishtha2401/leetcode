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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return NULL;
        int count=0;
        ListNode *cur=head;
        while(cur)
        {
            count++;
            cur=cur->next;
        }
        count/=2;
        
        int len=0;
        cur=head;
        while(cur)
        {
            if(len==count)
                break;
            cur=cur->next;
            len++;
        }
        return cur;
        
    }
};