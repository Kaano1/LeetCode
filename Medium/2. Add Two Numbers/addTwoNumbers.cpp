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

int base_count(long int num)
{
    int i;

    i = 1;
    for (; num > 0; i++)
        num /= 10;
    return (i - 1);
}

ListNode *listTocount(ListNode *l1, ListNode *l2)
{
    ListNode *tmp;
    ListNode *tmp2;
    ListNode *lst;
    ListNode *result;
    int i = 0;
    int cat = 0;

    tmp = l1;
    tmp2 = l2;
    if (tmp2 != nullptr)
        cat += tmp2->val;
    if (tmp != nullptr)
        cat += tmp->val;
    cat > 9 ? (lst = ft_lstnew(cat % 10), cat = base_count(cat) - 1) : (lst = ft_lstnew(cat), cat = 0);
    tmp = tmp->next;
    tmp2 = tmp2->next;
    result = lst;
    while (tmp != nullptr || tmp2 != nullptr || cat != 0)
    {
        if (tmp2 != nullptr)
            cat += tmp2->val;
        if (tmp != nullptr)
            cat += tmp->val;
        cat > 9 ? (lst->next = ft_lstnew(cat % 10), cat = base_count(cat) - 1) : (lst->next = ft_lstnew(cat), cat = 0);
        lst = lst->next;
        if (tmp != nullptr)
            tmp = tmp->next;
        if (tmp2 != nullptr)
            tmp2 = tmp2->next;
    }
    return (result);
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if (!l1 && !l2)
            return (0);
        else if (!l1)
            return (l2);
        else if (!l2)
            return (l1);
        return (listTocount(l1, l2));
    }
};