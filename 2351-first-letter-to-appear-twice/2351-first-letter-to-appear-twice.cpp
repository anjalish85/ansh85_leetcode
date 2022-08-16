class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char, int> mp;
        
        for(auto a: s){
            mp[a]++;
            if(mp[a]==2)
                return a;
        }
        
        // for(int i=0; i<s.size(); i++){
        //     if(mp[s[i]]==2){
        //         return s[i];
        //     }
        // }
        
        return -1;
    }
};