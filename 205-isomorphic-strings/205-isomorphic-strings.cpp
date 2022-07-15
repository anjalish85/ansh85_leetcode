class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        if(s.size()!=t.size())
            return 0;
        
        for(int i=0;i<s.size();i++){
            if( m.find(s[i])==m.end() ){
                for(auto a: m){
                    if(a.second==t[i])
                        return 0;
                }
                m[s[i]]=t[i];
            }
            else{
                if(m[s[i]]!=t[i])
                    return 0;
            }
        }
        return 1;
    }
};