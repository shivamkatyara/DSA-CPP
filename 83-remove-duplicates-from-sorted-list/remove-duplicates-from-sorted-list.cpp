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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp= head;
        ListNode* store= head;
        while(temp!=NULL&& temp->next!=NULL){
            if(temp->val==temp->next->val){
                store=temp->next;
                if(temp->next->next==NULL){
                    temp->next=NULL;
                }else{
                temp->next= temp->next->next;
                }
                delete store;
            }else{
                temp=temp->next;
            }
        }
        return head;
    }    
};