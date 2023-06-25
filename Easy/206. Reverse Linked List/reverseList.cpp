class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *reverse = nullptr;

        while (head != nullptr)
        {
            ListNode *tmp = head;

            head = head->next;
            tmp->next = reverse;
            reverse = tmp;
        }
        return (reverse);
    }
};