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
    ListNode* insertionSortList(ListNode* head) 
{
    ListNode dummy(0);
    ListNode* current = head;

    while(current != NULL)
    {
        ListNode* next = current->next;
        ListNode* temp = &dummy;

        while(temp->next != NULL &&
              temp->next->val < current->val)
        {
            temp = temp->next;
        }

        current->next = temp->next;
        temp->next = current;

        current = next;
    }

    return dummy.next;
}
};