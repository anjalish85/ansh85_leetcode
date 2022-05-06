class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> c;
        string ans;
        
        for(int i=0;i<s.size();i++){
            if(ans.length()!=0 && s[i]==ans[ans.length()-1]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
    
        return ans;
    }
};