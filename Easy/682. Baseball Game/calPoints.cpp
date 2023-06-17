class Solution {
public:
    void codSection(vector<int>& keep, string str)
    {
        short int index = keep.size() - 1;

        if (str == "D")
            keep.push_back(keep[index] * 2);
        else if (str == "C")
            keep.pop_back();
        else if (str == "+")
            keep.push_back(keep[index] + keep[index - 1]);
        else
            keep.push_back(stoi(str));
    }

    int calPoints(vector<string>& operations) 
    {
        int result = 0;
        vector<int> keep;

        for (string str: operations)
            codSection(keep, str);
        for (int add : keep)
            result += add;
        return (result);
    }
};