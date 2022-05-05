class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector <int> s;
        
        for(int i=0;i<nums.size();i++){
            if(target==nums[i])
                s.push_back(i);
        }
        
        for(int i=0;i<s.size();i++){
            s[i]=abs(s[i]-start);
        }
        
        return *min_element(s.begin(),s.end());
    }
};