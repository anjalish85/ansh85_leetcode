class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map <int, int> m;
        
        for(int i=0;i<nums.size();i++){
            //checking if target-current value is availabe in array to be used.
            //step-1
            if(m.find(target-nums[i])!=m.end()){
                //if available then simply produccing answer
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            //if not then storing the values and it's index so that it can be further used to check as in step-1
            m[nums[i]]=i;
        }
        
        return ans;
    }
};