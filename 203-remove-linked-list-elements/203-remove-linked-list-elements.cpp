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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        // ListNode *prev=NULL, *curr=head;
        // while(curr){
        //     if(curr->val==val){
        //         if(!prev)head=curr->next;
        //         else prev->next=curr->next;
        //     }
        //     else{
        //         prev=curr;
        //         curr=curr->next;
        //     }
        // }
        // return head;
        while(head && head->val==val){
            head=head->next;
        }
        ListNode *temp=head;
        while(temp){
            if(temp->next && temp->next->val==val){
                temp->next = temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};