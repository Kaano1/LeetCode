class Solution {
public:
    double average(vector<int>& salary) {
        double cal;
    
        cal = accumulate(salary.begin(),salary.end(),0);
        cal -= *max_element(salary.begin(), salary.end());
        cal -=  *min_element(salary.begin(), salary.end());
        cal /= (salary.size() - 2);
        return (cal);
    }
}