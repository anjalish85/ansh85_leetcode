class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // set <int>s2(nums.begin(),nums.end());
        // vector <int> s=
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        vector <int> s=nums;
        int ans=0;
        for(int i=1;i<s.size()-1;i++){
            if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1]))
                ans++;
        }
        return ans;
    }
};