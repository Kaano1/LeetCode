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

int	ft_lstsize(ListNode *lst)
{
	int	i;

	i = 0;
	for (i = 0; lst; lst = lst->next)
		i++;
	return (i);
}

ListNode	*ft_lstnew(int val)
{
	ListNode	*news;

	news = new ListNode();
    news->val = val;
	if (!news)
		return (0);
	news->next = NULL;
	return (news);
}

ListNode*   reverseList(ListNode* head) 
{
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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if (ft_lstsize(l1) < ft_lstsize(l2))
            swap(l1, l2);

        int keep = 0;
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        ListNode* head1 = l1;

        while (l2 != nullptr)
        {
            int tmp = l1->val;

            l1->val = (l2->val + l1->val + keep) % 10;
            keep = (tmp + l2->val + keep) / 10;

            l2 = l2->next;
            l1 = l1->next;
        }
        if (keep > 0)
        {
            while (l1 != nullptr && keep != 0)
            {
                int tmp = l1->val;
                l1->val = (l1->val + keep) % 10;
                l1 = l1->next;
                keep = (tmp + keep) / 10;
            }
            if (l1 == nullptr && keep > 0)
            {
                l1 = head1;
                while (l1->next != nullptr)
                    l1 = l1->next;
                l1->next = ft_lstnew(keep);
            }
        }
        head1 = reverseList(head1);
        return (head1);
    }
};

