class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size() - 1;
        return max(nums[0]*nums[1]*nums[n], nums[n-2]*nums[n-1]*nums[n]);
    }
};

// int flag=1;
//         vector<int> nums2=nums;
//         cout<<"nums without sorting";
//         for(auto it=nums.begin();it!=nums.end();it++){
//             cout<<*it<<" ";
//         }
//         cout<<endl;
        
//                 cout<<"nums2 without sorting";

//         for(auto it=nums2.begin();it!=nums2.end();it++){
//             cout<<*it<<" ";
//         }        cout<<endl;
        
//         for(auto it=nums.begin();it!=nums.end();it++){
//             *it=abs(*it);
//         }
//         sort(nums.rbegin(),nums.rend());
//                 cout<<"nums with sorting";

//         for(auto it=nums.begin();it!=nums.end();it++){
//             cout<<*it<<" ";
//         }
        
//         if(!std::count(nums2.begin(),nums2.end(),nums[0]))
//             flag*=(-1);
//         if(!std::count(nums2.begin(),nums2.end(),nums[1]))
//             flag*=(-1);
//         if(!std::count(nums2.begin(),nums2.end(),nums[2]))
//             flag*=(-1);
        
//         return nums[0]*nums[1]*nums[2]*flag;