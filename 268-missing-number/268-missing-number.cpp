class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        for(int i=0;i<m;i++){
            if(!count(nums.begin(),nums.end(),i)){
                return i;
            }
        }
        return m+1;
    }
};