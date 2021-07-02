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
      
        if (l1 == NULL and l2 == NULL) return NULL;
		else if (l1 == NULL) return l2; 
		else if (l2 == NULL) return l1; 
        
        ListNode *pre=new ListNode(0), *p=pre;
       int extra=0;
        while(l1 || l2 || extra)
        {
            int sum=(l1?l1->val:0)+(l2?l2->val:0)+extra;
            extra=sum/10;
            p->next= new ListNode(sum%10);
            p=p->next;
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        return pre->next;
        
        
    }
};