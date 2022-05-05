class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector <int> odd;
        vector <int> even;
        vector <int> num2;
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        
        int o=1,e=0;
        for(auto x:even){
            nums[e]=x;
            e+=2;
        }
        for(auto x:odd){
            nums[o]=x;
            o+=2;
        }
        
        return nums;
    }
};





// 