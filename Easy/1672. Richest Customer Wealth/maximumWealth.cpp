class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = -1;

        for (int sum; vector<int> account : accounts)
        {
            for (sum = 0; int num : account)
                sum += num;
            m=max(m, sum);
        }
        return (m);
    }
};