class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //making use pf array's sorted nature
        
        int l=0;
        int h=numbers.size()-1;
        
        while(l<h){
            //checking if sum is present or not
            if(numbers[l]+numbers[h]==target)
                //incrementing before returning as qn is 1-indexed
                return {++l, ++h};
            //if number wanted is greater than what's needed then choosing the lesser value present before it
            else if(numbers[l]+numbers[h]>target)
                h--;
            //if number wanted is lesser than what's needed then choosing the greater value present just after it
            else
                l++;
        }
        
        return {-1, -1};
    }
};