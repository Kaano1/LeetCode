class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
            return (false);
        int i = -1;
        char tmp = 0;

        while (s[++i])
        {
            if (t.find(s[i]) != -1)
            {
                tmp = t[t.find(s[i])];
                t[t.find(s[i])] = ' ';
                s[s.find(tmp)] = ' ';
            }
            else
                return (false);
        }
        if (s == t)
            return (true);
        return (false);
    }
};