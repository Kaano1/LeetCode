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
    void    rev_node(ListNode **reverse, ListNode **head)
    {
        ListNode *tmp = *head;

        (*head) = (*head)->next;
        tmp->next = *reverse;
        (*reverse) = tmp;
    }

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