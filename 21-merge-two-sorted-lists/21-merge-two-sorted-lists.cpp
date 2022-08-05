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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
//making a list to store the values in sorted fashion
        ListNode *t1= new ListNode;
//storing the previous list into another as per code at the end it will poipnt to last element
        ListNode *t2=t1;
//comparing the values 
        while (list1 && list2){
            if(list1->val < list2->val){
                t1->next=list1;
                list1=list1->next;
            }
            else{
                t1->next=list2;
                list2=list2->next;
            }
        t1=t1->next;
        }
//cheching if list has other value or not 
        if(list1)
            t1->next=list1;
        if(list2)
            t1->next=list2;
//retuening the node 
        return t2->next;
    }
};