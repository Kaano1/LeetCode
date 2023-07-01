class Solution {
public:
    string vowels = "aeiouAEIOU";
    
    int  changeVowels(string &str, int index, char c)
    {
        for (int i = index; str[i]; --i)
        {
            if (vowels.find(str[i]) != -1)
                return (i);
        }
        return (-1);
    }

    string  reverseVowels(string s) 
    {
        int index = s.size() - 1;
        for (int i = 0; i < index; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if (s[i] == vowels[j] && changeVowels(s, index, vowels[j]) != -1)
                {
                    index = changeVowels(s, index, vowels[j]);
                    j = s[i];
                    s[i] = s[index];
                    s[index] = j;
                    --index;
                    break;
                }
            }
        }
        return (s);
    }
};