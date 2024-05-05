// 05-05-24 Day5
// Question Number 237 -> Delete Node in a Linked List
// Link -> https://leetcode.com/problems/delete-node-in-a-linked-list/

//Solution

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* prev=NULL;
        while(temp->next!=NULL){
            temp->val=temp->next->val;
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        node=prev;
    }
};
