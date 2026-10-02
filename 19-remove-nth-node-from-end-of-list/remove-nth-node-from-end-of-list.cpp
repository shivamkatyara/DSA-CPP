class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL) {
            return NULL;
        }

        // Find size
        int size = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        if (n == size) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        temp = head;

        for (int i = 0; i < size - n - 1; i++) {
            temp = temp->next;
        }

        ListNode* temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;

        return head;
    }
};