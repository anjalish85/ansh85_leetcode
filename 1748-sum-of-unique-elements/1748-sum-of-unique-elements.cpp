class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int s=0;
        unordered_map <int , int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto a: m){
            if(a.second==1){
                s+=a.first;
            }
        }
        
        return s;
    }
};