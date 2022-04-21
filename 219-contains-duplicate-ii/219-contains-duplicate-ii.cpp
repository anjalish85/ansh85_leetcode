class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int siz=nums.size();
        set <int> s(nums.begin(),nums.end());
        // cout<<siz<<endl<<s.size();
        if((nums.size()-s.size())==0){
            return 0;
        }
        else{
            for(int i=0;i<siz;i++){
            for(int j=i+1;j<siz;j++){
                if((abs(i-j)<=k) && (nums[i]==nums[j])){
                    return 1;
                    // break;
                }
        }
            }
        }
//         for(int i=0;i<siz;i++){
//             for(int j=i+1;j<siz;j++){
//                 if((abs(i-j)<=k) && (nums[i]==nums[j])){
//                     return 1;
//                     // break;
//                 }
//                 // else{
//                 //     return 0;
//                 //     // break;
//                 // }
//             }
            
//         }
//         return 0;
        return 0;
    }
};