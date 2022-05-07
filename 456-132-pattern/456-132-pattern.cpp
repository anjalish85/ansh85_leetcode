class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        
        // no 132 pattern possible
        if(n<3) return false;
        
        // track min value in range 0 to i-1
        vector<int>minValues(n,INT_MAX);
        
        // store min values
        for(int i=1;i<n;i++)
            minValues[i] = min(minValues[i-1],nums[i-1]);
        
        stack<int>stak;
        
        // Loop through end to start
        for(int i=n-1;i>=0;i--)
        {
            // pop numbers from stack which are less or equal to minValue[i]
            // find next greater number of minValue[i]
            while(!stak.empty() && stak.top()<=minValues[i])
                stak.pop();
            
            // stack.top < nums[i] then it is a 132 pattern as stack.top > minValue[i]
            if(!stak.empty() && stak.top()< nums[i]) return true;
            
            stak.push(nums[i]);
        }
        
        return false;
    }
};


// int flag=0;
//         for(int i=0;i<nums.size()-2;i++){
//             if((nums[i]<nums[i+1] ) && (nums[i+1]>nums[i+2]) && (nums[i]<nums[i+2]))
//                 flag=1;
//             cout<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<endl;
//         }
//     return flag;

// int flag=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 for(int k=j+1;k<nums.size();k++){
//                     if((nums[i]<nums[j] ) && (nums[j]>nums[k]) && (nums[i]<nums[k]))
//                         flag=1;
//                 }
//             }
//         }
//     return flag;