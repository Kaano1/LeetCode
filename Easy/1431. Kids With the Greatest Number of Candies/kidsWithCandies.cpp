class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int             max_value = *max_element(candies.begin(), candies.end());
        vector<bool>    result;

        for (int i = candies.size() - 1; i > -1; --i)
            switch (max_value <= candies[i] + extraCandies)
            {
                case 1:
                    result.insert(result.begin(), true);
                    break;
                default:
                    result.insert(result.begin(), false);
                    break;
            }
        return (result);
    }
};