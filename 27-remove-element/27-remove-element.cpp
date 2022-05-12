class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int s=nums.size();
        // vector <int> v;
        for(int i=0;i<s;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};