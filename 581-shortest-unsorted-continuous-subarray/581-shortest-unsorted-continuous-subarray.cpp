class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        
        sort(temp.begin(), temp.end());
        int first =-1, last =-1;
        
        for(int i=0;i<nums.size();i++){            
            if(nums[i]!=temp[i]){
                if(first==-1)   first=i;
                last=i;
            }
        }
        if(first==-1 && last==-1)   return 0;
        return last-first+1;

    }};

// vector <int> nums2(nums.begin(),nums.end());
//         sort(nums2.begin(),nums2.end());
//         int c=0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=nums2[i]){
//                 c++;
//             }
//         }
//         return c;


// int startfun(vector <int> nums){
//         int r;
//             for(int i=0;i<nums.size();i++){
//             if(nums[i]>nums[i+1])
//                 r= i;
//                 break;
//         }
//         return r;
//     };
//     int endfun(vector <int> nums){
//         int r;
//             for(int i=nums.size()-1;i>0;i--){
//             if(nums[i]<nums[i-1])
//                r= i;
//                 break;
//         }
//         return r;
//     };
// public:
//     int findUnsortedSubarray(vector<int>& nums) {
//         // if(nums==sort(nums.begin(),nums.end()))
//         //     return 0;
        
//         vector <int> nums2(nums.begin(),nums.end());
//         sort(nums2.begin(),nums2.end());
//         if(nums==nums2){
//             return 0;
//         }
        
//         int start=startfun(nums);
//         int end=endfun(nums);
        
//         return end-start-1;
//     }
// };