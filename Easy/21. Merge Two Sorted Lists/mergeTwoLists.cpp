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
    void add_node(ListNode **list, int num)
    {
        switch (*list != nullptr)
        {
            case 1:
                while ((*list)->next != nullptr)
                *list = (*list)->next;
                (*list)->next = new ListNode();
                *list = (*list)->next;
                (*list)->val = num;
                (*list)->next = nullptr;
                break;
            default:
                (*list) = new ListNode();
                (*list)->next = nullptr;
                (*list)->val = num;
                break;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = nullptr;
        ListNode** keep = &result;

        while (list1 != nullptr && list2 != nullptr)
        {
            switch (list1->val < list2->val)
            {
                case 1:
                    add_node(keep, list1->val);
                    list1 = list1->next;
                    break;
                default:
                    add_node(keep, list2->val);
                    list2 = list2->next;
            }
            keep = &((*keep)->next);
        }
        if (list1 != nullptr)
            *keep = list1;
        else
            *keep = list2;
        return (result);
    }
};