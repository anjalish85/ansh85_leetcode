class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1,s2;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#' && !s1.empty()){
                s1.pop();
            }
            if(s[i] != '#'){
                s1.push(s[i]);
            }
        }
        
        for(int i=0;i<t.size();i++){
            if(t[i] == '#' && !s2.empty()){
                s2.pop();
            }
            if(t[i] != '#'){
                s2.push(t[i]);
            }
        }
        
        if(s1==s2)
            return 1;
        return 0;
    }
};




// vector <char> f1,f2;
        
//         if(s[0]=='#'){
//             f1.clear();//break;//continue;
//         }
//         else{
//                 for(int i=0;i<s.size();i++){
//                 if(s[i]=='#'){
//                     f1.pop_back();
//                 }
//                 else{
//                     f1.push_back(s[i]);
//                 }
//             }
//         }
        
//         if(t[0]=='#'){
//             f2.clear();//continue;//f2==0;
//         }
//         else{
//                 for(int i=0;i<t.size();i++){
//                 if(t[i]=='#'){
//                     f2.pop_back();
//                 }
//                 else{
//                     f2.push_back(t[i]);
//                 }
//             }
//         }
                
//         if(f1==f2)
//             return 1;
//         return 0;