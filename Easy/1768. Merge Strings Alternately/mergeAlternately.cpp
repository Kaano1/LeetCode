class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int     i = 0;
        int     j = 0;
        int     max = word2.length() + 1;

        if (word1.length() > max)
            max = word1.length() + 1;
        while (--max > -1)
        {
            if (word1[i] != NULL)
                result += word1[i++];
            if (word2[j] != NULL)
                result += word2[j++];
        }
        return (result);
    }
};