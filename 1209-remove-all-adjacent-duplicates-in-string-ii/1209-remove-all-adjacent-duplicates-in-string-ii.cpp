class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector <pair<char,int>> p;
        string ans;
       
        for(auto c: s){
            if(p.empty() || p.back().first !=c){
                p.push_back({c,1});
            }
            else{
                p.back().second++;
                if(p.back().second==k){
                    p.pop_back();
                }
            }
        }
        
        for(auto c:p){
            ans.append(c.second,c.first);
        }
        return ans;
    }
};

// string ans;
//         int c=0;
//         for(int i=0;i<s.size();i++){
//             if(ans.length()!=0 || ans[ans.length()-1]==s[i]){
//                 ans.push_back(s[i]);
//                 c++;
//                 if(ans.length()!=0 ||  (c==k)){
//                     for(int j=1;j<=k;i++){
//                         ans.pop_back();
//                     }
//                     c=0;
//                 }
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
        
//         return ans;