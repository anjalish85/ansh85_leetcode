class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;
        for( auto it=nums.begin();it!=nums.end();it++){
            int ele=*it;
            if(std::count(v.begin(),v.end(),ele)){
                nums.erase(it);
                it--;
            }
            else{
                v.push_back(*it);
            }
        }
        return nums.size();
    }
};