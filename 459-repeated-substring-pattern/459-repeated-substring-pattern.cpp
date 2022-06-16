class Solution {
public:
    bool fn(string s, string str){
        for(int i=0;i<s.size();i+=str.size()){
            string cs=s.substr(i,str.length());
            if(cs!=str)     return 0;
        }
        return 1;
    }
    bool repeatedSubstringPattern(string s) {
        string str="";
        for(int i=0;i<s.size()/2;i++){
            str+=s[i];
            if((s.size()%str.size())==0){
                bool x=fn(s.substr(i+1), str);
                if(x)       return 1;
            }
        }
        return 0;
    }
};