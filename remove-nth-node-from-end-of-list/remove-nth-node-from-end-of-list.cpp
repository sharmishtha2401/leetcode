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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        ListNode *p=head;
        while(p)
        {
            count++;
            p=p->next;
        }
        int m=count-n;
        ListNode *newHead= new ListNode(0);
        //newHead=NULL;
        newHead->next=head;
        
        count=1;
        p=newHead;
        while(count!=m)
        {
            p=p->next;
            count++;
        }
        p->next=p->next->next;
        return newHead->next;
        
    }
};