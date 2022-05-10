class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int r=0;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i])
                sum=sum+nums[i];
            else{
                r=max(sum,r);
                sum=nums[i];
            }
        }
        r=max(sum,r);
        return r;
    }
};

// vector <vector<int>> ans;
//         vector <int> s;
//         int sum=0;
//         int j=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]<nums[i+1]){
//                 ans[j].push_back(nums[i]);
//                 sum+=nums[i];
//             }
//             else{   
//                 // nums.clear();
//                 j++;
//             }
//         }
        
//         for(int j=0;j<ans.size();j++){
//             int k=accumulate(ans[j].begin(),ans[j].end(),0.0);
//             s.push_back(k);
//         }
//         // return sum;
//         return *max_element(s.begin(),s.end());