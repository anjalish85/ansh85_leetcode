class Solution {
public:
    int pivotIndex(vector<int>& nums) {
// more complex one (time)
        // int ls=0;
        // int rs=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int m=0;m<i;m++){
        //         ls+=nums[m];
        //     }
        //     for(int n=i+1;n<nums.size();n++){
        //         rs+=nums[n];
        //     }
        //     if(ls==rs)
        //         return i;
        // }
        // return -1;     
        
// less complex one (time) 
        int l=0;
        int s=0;
        //calculating sum
        for(int i=0; i<nums.size(); i++){
            s+=nums[i];
        }
        //checking for pivot once for all
        for(int i=0; i<nums.size(); i++){
            s-=nums[i];
            if(l==s)
                return i;
            l+=nums[i];
        }
        return -1;
    }
};