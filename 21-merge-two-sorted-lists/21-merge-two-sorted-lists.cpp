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
        ListNode * t2= new ListNode();
        ListNode * t1= t2;
        
        while(list1 && list2){
            if(list1->val < list2->val){
                t1-> next=list1;
                list1=list1->next;
            }
            else{
                t1-> next=list2;
                list2=list2->next;
            }
            t1 = t1->next;
        }
        
        if (list1)  t1->next=list1;
        if (list2)  t1->next=list2;
        
        return t2->next;
        
    }
};