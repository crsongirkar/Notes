// Level is Medium 
//  normal approach to this code you will use a 3 pointer to perform the operation.
// and solve the.
// Link https://leetcode.com/problems/reverse-nodes-in-k-group/

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
// approch 1:
class Solution {
public:
   void reverse(ListNode* s, ListNode* e) //reverse a linked list
   {
       ListNode* p = NULL, *curr = s, *n = s->next;

        while(p!=e) //prev != end of linkedList
        {
            curr->next = p;
            p = curr;
            curr = n;

            if(n!= NULL)
            
            n = n->next;
            

        }  
   // void are return a NULL value 
   }
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(k==1 || head== NULL || head->next==NULL) return head; // handel base case

        ListNode* s = head; 
        ListNode* e = head;
    
    int x= k-1; // for traversing the element and find out the k group traverse. k will perform to the [k--] times.
      // E.g reverse the 2 nodes the k is the k = 2; the traverse the list start form  0 , 1 then will be stop and return end;   
    while(x--)
    {
       e = e->next;
        if(e==NULL) return head;

        
    } 
     ListNode* rem = reverseKGroup(e->next , k);
    
       reverse(s,e);// call the void function

       s->next = rem; // change the node after swapping element  

       return e; // return the end 
        
    }
};

// approach 2:
