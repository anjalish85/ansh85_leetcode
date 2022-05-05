class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0;
        int l=0;
        int r=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            if((nums[l]+nums[r])==k){
                c++;
                l++;
                r--;
            }
            else if((nums[l]+nums[r])>k)
                r--;
            else if((nums[l]+nums[r])<k)
                l++;
        }
        return c;
    }
};

// for(int i=0;i<s-1;i++){
//             if(nums[i]<=k){
//                 for(int j=i+1;j<s;j++){
//                     if(nums[j]==(k-nums[i])){
//                         c++;
//                         nums.erase(nums.begin(),nums.begin()+i);
//                         nums.erase(nums.begin(),nums.begin()+j);
//                     }
//                 }
//             }
//         }

// int i=0;//j=0;
        
//         while(i<s-1){
//             if(nums[i]<=k){
//                 int j=i+1;
//                 while(j<s){
//                     if(nums[j]==(k-nums[i])){
//                         c++;
//                         nums.erase(nums.begin()+i);//,nums.begin()+i);
//                         nums.erase(nums.begin()+j);//,nums.begin()+j);
//                     }
//                     j++;
//                 }
//             }
//             i++;
//         }


// int c=0;
//         int s=nums.size();
//         set <int> sp1;
//         set <int> sp2;
        
//         for(int i=0;i<s-1;i++){
//             if(nums[i]<=k){
//                 for(int j=i+1;j<s;j++){
//                     if(nums[j]==(k-nums[i])){
//                         sp1.insert(i);
//                         sp2.insert(j);
//                     }
//                 }
//             }
//         }
//         pair <int,int> m=minmax(sp1.size(),sp2.size());
//         return m.second;