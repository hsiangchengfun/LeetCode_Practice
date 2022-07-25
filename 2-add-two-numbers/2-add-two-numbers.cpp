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

        
        ListNode init(0);
        
        ListNode* tmp = &init;
        int val = 0;
        
        while( val!=0 || l1 != NULL || l2 != NULL ){
            val += ((l1==NULL)? 0:l1->val) + ((l2==NULL)? 0:l2->val);
            
            tmp->next = new ListNode(val%10);
            tmp = tmp->next;
            val /= 10;
            if(l1!=NULL)l1 = l1->next;
            if(l2!=NULL)l2 = l2->next;
        }
        
        return init.next;
    }
};