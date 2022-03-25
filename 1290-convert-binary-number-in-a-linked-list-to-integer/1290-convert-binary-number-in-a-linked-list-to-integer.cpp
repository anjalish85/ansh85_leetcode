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
    int getDecimalValue(ListNode* head) {
        vector <int> v;
        int d=0;
        ListNode *temp = head;
        //v.push_back(temp->val);
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=v.size()-1;i>=0;i--){
            d=d+(v[i]*pow(2,v.size()-i-1));
        }
        return d;
    }
};