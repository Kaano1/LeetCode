class Solution {
public:

    int count_to_char(string str, char c)
    {
        int i = -1;
        int count = 0;

        while (str[++i])
            if (str[i] == c)
                ++count;
        return (count);
    }

    char findTheDifference(string s, string t)
    {
        string used = "";
        char c = 0;
        int i = 0;

        while (t[i])
        {
            if (used.find(t[i]) && count_to_char(s, t[i]) != count_to_char(t, t[i]))
            {
                c = t[i];
                return (c);
            }
            else
                used += t[i];
            i++;
        }
        return (c);
    }
};