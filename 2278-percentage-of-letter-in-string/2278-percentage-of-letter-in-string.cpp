class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(auto ch: s){
            if(ch==letter)
                c++;
        }
        
        return (c*100)/s.size();//)*100;
    }
};