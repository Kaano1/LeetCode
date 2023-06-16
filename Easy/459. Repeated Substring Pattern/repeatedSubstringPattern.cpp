class Solution {
public:
    bool checkStr(string base, string str)
   {
        int i;
        i = 0;
        if (base.length() % str.length())
            return false;
       while (i < base.length())
       {
           string front = base.substr(i, str.length());
           if (front != str)
                return false;
           i += str.length();
       }
       return true;
   }  
    bool repeatedSubstringPattern(string s) 
    {
        if (s.length() == 1)
            return (false);
        string check = "";
        int         i = -1;
        int         key = 0;

        i = 1;
        while (i < s.length())
        {
            string front = s.substr(0, i);
            string back = s.substr(i, front.length());
            if (front == back)
            {
                if (checkStr(s, front))
                    return true;
            } 
            ++i;
        }
        return false;
        while (s[++i])
        {
            if (s[i] != s[0])
                key = 1;
            if (s[i] == s[0] && s[i + 1] == s[1] && key == 1)
                break;
            check += s[i];
        }
        cout << check << endl;
        i = -1;
        while (s[++i])
        {
            if (s[i] != check[i % (check.length())])
                return (false);
        }
        if (check[i % (check.length())] != s[0])
            return (false);
        return (true);
    }
};
