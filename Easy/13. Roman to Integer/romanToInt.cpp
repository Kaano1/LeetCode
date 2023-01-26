class Solution {
public:

    int findIndex(string s, int index, string *alp)
    {
        int i = 0;

        if (!s[index])
            return (0);
        while (1)
        {
            if (alp[i][0] == s[index])
                return (i);
            i++;
        }
        return (i);
    }

    int romanToInt(string s) 
    {
        string alp[] = {"I", "V", "X", "L", "C", "D", "M"};
        short int const    alpInt[] = {1, 5, 10, 50, 100, 500, 1000};
        short int num = 0, i = -1, j = 0, c = 0;;

        while (s[++i])
        {
            j = findIndex(s, i, alp);
            c = findIndex(s, i + 1, alp);
            alpInt[j] < alpInt[c] ?  num += alpInt[c] - alpInt[j], i++ : num += alpInt[j];
        }
        return (num);
    }
};