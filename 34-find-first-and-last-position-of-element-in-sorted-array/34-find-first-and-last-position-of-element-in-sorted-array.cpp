class Solution {
public:
    int fp(vector<int>& nums, int target){
        int l=0;int ans=-1;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target)
                {ans=mid;
                r=mid-1;}
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return ans;
    }
    int lp(vector<int>& nums, int target){
        int l=0;int ans=-1;
        int r=nums.size()-1;
        while(l<=r){
            
            int mid=(l+r)/2;
            if(nums[mid]==target)
                {ans=mid;
                l=mid+1;}
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
    return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
        v.push_back(fp(nums, target));
        v.push_back(lp(nums, target));
        
        return v;
    }
};