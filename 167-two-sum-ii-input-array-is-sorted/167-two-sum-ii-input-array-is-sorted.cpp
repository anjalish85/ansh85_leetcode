class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //making use pf array's sorted nature
        
        int l=0;
        int h=numbers.size()-1;
        
        while(l<h){
            if(numbers[l]+numbers[h]==target)
                return {++l, ++h};
            else if(numbers[l]+numbers[h]>target)
                h--;
            else
                l++;
        }
        
        return {-1, -1};
    }
};