/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1

int isLengthEvenOrOdd(struct Node* head)
{
    struct Node *temp;
    temp = head;
    // if(head == NULL)
    // {
    //   cout<<"Even";
    // }
         int count =0;
    while(head!=NULL)
    {
        
         count++;
         head=head->next;
    }
       if (count%2==0)
     {
         return 0;
     }
     else
     
     return 1;
    
    
    
     //Code here
}
