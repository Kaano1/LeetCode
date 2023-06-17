class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        int i = -1;
        int dif = arr[0] - arr[1];;
        
        while (++i < arr.size() - 1)
            if (arr[i] - arr[i + 1] != dif)
                    return (false);
        return (true);
    }  
};