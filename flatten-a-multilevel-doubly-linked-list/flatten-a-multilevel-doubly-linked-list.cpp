/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        for(Node *h=head; h; h=h->next)
        {
            if(h->child)
            {
                Node *neww=h->next;
                h->next=h->child;
                h->next->prev=h;
                h->child=NULL;
                Node *p=h->next;
                while(p->next)
                    p=p->next;
                p->next=neww;
                if(neww)
                    neww->prev=p;
            }
        }
        return head;
    }
};