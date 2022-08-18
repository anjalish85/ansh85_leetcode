class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> mp;
        
        //creating frequency map
        for(auto a: s){
            mp[a]++;
        }
        
        //checking and returning the index of first appeared element
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]==1)
                return i;
        }
        return -1;
    }
};