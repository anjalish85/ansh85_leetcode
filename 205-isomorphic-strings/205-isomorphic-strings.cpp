class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_map<char, char> mp;
        if(s.size()!=t.size())
            return 0;
        
        for(int i=0;i<s.size();i++){
            if( m.find(s[i])==m.end() ){
                m[s[i]]=t[i];
            }
            else{
                if(m[s[i]]!=t[i])
                    return 0;
            }
        }
        swap(s,t);
        
        for(int i=0;i<s.size();i++){
            if( mp.find(s[i])==mp.end() ){
                mp[s[i]]=t[i];
            }
            else{
                if(mp[s[i]]!=t[i])
                    return 0;
            }
        }
        return 1;
    }
};