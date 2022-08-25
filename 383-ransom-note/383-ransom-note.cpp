class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> mp;
        //storing the character frequency
        for(auto ch: magazine){
            mp[ch]++;
        }
        //matching it with ransomNote's frequency
        for(auto ch: ransomNote){
            if(mp[ch]==0)
                return 0;
            mp[ch]--;
        }
        
        return 1;
    }
};