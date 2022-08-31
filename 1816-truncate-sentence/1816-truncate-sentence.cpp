class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        
        // while(k>1){
            for(auto a: s){
                if(a!=' '){
                    ans+=a;
                }
                else{
                    k--;
                    if(k==0)
                        break;
                    ans+=a;
                    
                }
            }
        // }
        // ans.pop_back();
        return ans;
    }
};