class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,char> Map;
        for(int i = 0 ; i < order.size() ; ++i) {
            Map[order[i]] = (char)('a'+i);
        }
        vector<string> copywords;
        for(int i = 0 ; i < words.size(); i++) {
            string copyword;
            string ithWord = words[i];
            for(int j = 0 ; j < ithWord.length() ; ++j) {
                copyword += Map[ithWord[j]];
            }
            copywords.push_back(copyword);
        } 
        return is_sorted(copywords.begin(),copywords.end());
    }
};