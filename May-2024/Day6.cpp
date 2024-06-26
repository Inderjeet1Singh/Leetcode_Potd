// Day6 06-05-24
//Question Number --> 2487 Remove Nodes From Linked List 
// Link --> https://leetcode.com/problems/remove-nodes-from-linked-list/?envType=daily-question&envId=2024-05-06

//Solution

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
    ListNode* ReverseList(ListNode* head){
       ListNode* curr,*nextp,*prev;
       prev=NULL;
       curr=head;
       while(curr!=NULL){
           nextp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextp;
       }
       return prev;
    }
    ListNode* removeNodes(ListNode* head) {
       head = ReverseList(head);
       ListNode* curr = head,*prev=head;
       int maxi = head->val;
       while(curr!=NULL){
           if(curr->val >= maxi ){
               maxi = curr->val;
                prev = curr;
                curr = curr->next;
           } else {
               prev->next = curr->next;
               curr = prev->next;
           }
       }
       head = ReverseList(head);
       return head;
    }
};
