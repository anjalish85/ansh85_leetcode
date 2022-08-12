class Solution {
public:
    //writing funcion to find first occurence
    int fp(vector <int> nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                ans=mid;
                //initiating rear end point to find the first occurence
                r=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
    
    //writing funcion to find last occurence
    int lp(vector <int> nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                ans=mid;
                //initiating front end point to find the last occurence
                l=mid+1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
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