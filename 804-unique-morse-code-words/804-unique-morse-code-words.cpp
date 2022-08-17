class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map <char, string> mp;
        int i=0;
        set <string> code;
        
        //mapping the letter with their corresponding codes;
        for(char ch='a'; ch<='z'; ch++){
            mp[ch]=v[i++];
        }
        string coded="";        
        for(string st: words){
            for(char ch: st){
                coded+=mp[ch];
            }
            code.insert(coded);
            coded="";
        }
        
        return code.size();
    }
};