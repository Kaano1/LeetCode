class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();

        cout << digits[0] << endl;
        while (--len != -1)
        {
            digits[len] += 1;
            if (digits[len] <= 9)
                break;
            digits[len] = 0;
        }
        len = 0;
        if (digits[len] == 0)
            digits.insert(digits.begin(), 1);
        return (digits);
    }
};
