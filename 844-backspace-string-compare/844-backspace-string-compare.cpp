class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //since we have to delete letter based on most recentt character iterated thereffore stack is implemented
        stack <char> s1;
        stack <char> t1;
        
        for(auto a: s){
            if(a=='#' && !s1.empty())
                s1.pop();
            if(a!='#')
                s1.push(a);
        }
        
        for(auto a: t){
            if(a=='#' && !t1.empty())
                t1.pop();
            if(a!='#')
                t1.push(a);
        }
        
        return (s1==t1);
    }
    
};