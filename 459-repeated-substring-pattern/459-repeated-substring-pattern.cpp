class Solution {
public:
    bool issafe(string s,string str){
        for(int i=0;i<s.length();i+=str.length()){
            string cs=s.substr(i,str.length());
            if(cs!=str) return false;
        }
        return true;
    }
    bool repeatedSubstringPattern(string s) {
        string str="";
        for(int i=0;i<s.length()/2;i++){
            str+=s[i];
            if(s.length()%str.length()==0){
                bool x=issafe(s.substr(i+1),str);
                if(x)   return true;
            }
        }
        return 0;
    }
};