class Solution {
public:
    bool    is_it_ok(string str, string tr)
    {
        int i = -1;
        int size = tr.size();
        int j = -1;

        while (str[++i])
            if (str[i] != tr[++j % size])
                return (false);
        return (true);
    }

    int    twor(string str, string tr)
    {
        int i = -1;
        int size = tr.size();
        int j = 0;
        int c = 0;

        while (str[++i])
            if (j + 1 >= size)
            {
                c++;
                j = 0;
            }
            else
                ++j;
        if (c % 2 == 0 && j == 0)
            return (c);
        return (-1);
    }

    string  end(int num1, int num2, string &result)
    {
        int max = 1;

        for (int i = 2; i < num2 + 1 && num1 != num2; i += 2)
            if (num1 % i == 0 && num2 % i == 0)
                max = i;
        string tmp = result;
        while (--max)
            result += tmp;
        return (result);
    }

    string gcdOfStrings(string str1, string str2)
    {
        if (str1 == str2)
            return (str1);
        else if (!is_it_ok(str1 + str2, str2))
            return ("");
        else if (str1.size() < str2.size()) swap(str1, str2);

        string  result = "";

        for (int i = 0; str1[i]; i++)
        {
            result += str1[i];
            if (is_it_ok(str1, result))
                break;
        }
        return (end(twor(str1, result), twor(str2, result), result));
    }
};