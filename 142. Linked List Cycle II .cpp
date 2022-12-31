// https://leetcode.com/problems/linked-list-cycle-ii/ problem link

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
       
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow -> next;
            fast = fast -> next ->next;
            if(slow==fast)
                         break;
            
        }
         if(fast==NULL || fast->next == NULL) return NULL;
        
        ListNode *ptr1 = head , *ptr2 = slow;
        
       
        
        while(ptr1!=ptr2)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
        }
        return ptr1;
        
