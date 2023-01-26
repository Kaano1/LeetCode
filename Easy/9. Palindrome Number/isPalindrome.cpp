class Solution {
public:
    int ft_count(int x)
    {
        int ch;

        ch = 0;
        while (x)
        {
            x /= 10;
            ch++;
        }
    return (ch);
    }

    bool isPalindrome(int x)
    {
        long int num = 0;
        int catchs = x;

        if (x < 0)
            return (false);
        while (x)
        {
            num = (num * 10) + (x % 10);
            x /= 10;
        }
        if (num == catchs)
            return (true);
        return (false);
}
};