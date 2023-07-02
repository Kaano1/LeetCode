class Solution {
public:
    int key = 1;

    string reverseWords(string s) {
        string result = "";
  
        for (int i = 0; s[i]; ++i)
            if (key == 0 &&  s[i + 1] > 32 && s[i] == ' ')
                result = " " + result, key = 1;
            else if (key == 1 && s[i] > 32)
            {
                string tmp = "";
                key = 0;
                for (int j = i; s[j] > 32; ++j)
                    tmp += s[j];
                result = tmp + result;
            }
        return (result);
    }
};