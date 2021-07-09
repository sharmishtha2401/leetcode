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
        while(len!=count)
        {
            cur=cur->next;
            len++;
        }
        return cur;
        
    }
};
