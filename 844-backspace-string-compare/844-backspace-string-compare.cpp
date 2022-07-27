class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1,t1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' and !s1.empty())
                s1.pop();
            if(s[i]!='#')
                s1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' and !t1.empty())
                t1.pop();
            if(t[i]!='#')
                t1.push(t[i]);
        }
        
        // cout<<s1<<" "<<t1;
        
        return (s1==t1);
    }
};