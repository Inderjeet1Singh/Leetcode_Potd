// Day7 07-05-24
// Question Number --> 2816 Double a Number Represented as a Linked List
// Link --> https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/?envType=daily-question&envId=2024-05-07

// Solution
class Solution {
public:
struct ListNode* Reverse_Linked_List(struct ListNode* head){
    struct ListNode* prev,*nextP,*current;
   prev=NULL;
   current=head;
   while(current!=NULL){
    nextP=current->next;
    current->next=prev;
    prev=current;
    current=nextP;
   }
   return prev;

}
    ListNode* doubleIt(ListNode* head) {
        head=Reverse_Linked_List(head);
        struct ListNode* temp=head,*prev;
        int carry=0;
        int sum=0;
            while(temp!=NULL){
                sum=(2*temp->val + carry);
                temp->val=sum%10;
                carry=sum/10;
                prev=temp;
                temp=temp->next;
            }
            if(carry){
                struct ListNode* NewNode = (struct ListNode*)malloc(sizeof(struct ListNode));
                NewNode->val=carry;
                NewNode->next=NULL;
                prev->next=NewNode;
            }
            head=Reverse_Linked_List(head);
            return head;      
    }
};
