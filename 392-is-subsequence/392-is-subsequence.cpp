class Solution {
public:
    bool isSubsequence(string s, string t) {
        swap(s,t);
        int i=0;
        int j=0;int c=0;
        while(i<s.size()){
            if(s[i]==t[j])
                {c++;j++;}
            // for(auto a: t){
            //     if(s[i]==a){
            //         c++;
            //     }
            // }
            i++;
        }
        if(c==t.size())
            return 1;
        else
            return 0;
        
        return 0;
    }
};