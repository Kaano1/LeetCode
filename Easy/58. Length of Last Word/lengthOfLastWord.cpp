class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int i = s.length() - 1;
        int len = 0;

        while (i != 0 && (isspace(s[i]) || s[i] == 0))
            i--;
        while (i != -1)
        {
            if (isspace(s[i]))
                break;
            ++len;
            i--;
        }
        return (len);
    }
};