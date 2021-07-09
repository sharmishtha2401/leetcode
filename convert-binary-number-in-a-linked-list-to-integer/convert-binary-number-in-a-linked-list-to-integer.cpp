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
    int getDecimalValue(ListNode* head) {
        int len=-1;
        int sum=0;
        ListNode *cur=head;
        while(cur)
        {
            len++;
            cur=cur->next;
        }
        cur=head;
        while(cur)
        {
            sum+=(pow(2,len)*cur->val);
            len--;
            cur=cur->next;
        }
        return sum;
        
    }
};