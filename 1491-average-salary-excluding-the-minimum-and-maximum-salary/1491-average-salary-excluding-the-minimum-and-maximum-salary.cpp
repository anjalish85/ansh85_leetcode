class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        salary.pop_back();
        reverse(salary.begin(),salary.end());
        salary.pop_back();

        return accumulate(salary.begin(),salary.end(),0.0)/salary.size();
    }
};