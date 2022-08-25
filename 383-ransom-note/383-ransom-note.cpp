class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> mp;
        
        for(auto ch: magazine){
            mp[ch]++;
        }
        
        for(auto ch: ransomNote){
            if(mp[ch]==0)
                return 0;
            mp[ch]--;
        }
        
        return 1;
    }
};