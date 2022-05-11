class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> cnt;
        // find the number of diff chars 
        for(int i=0;i<s1.size()&& cnt.size()<3;i++){
            if(s1[i]!=s2[i]){
                cnt.push_back(i);
            }
        }
        // when the chars are exactly the same or there is only one pair of diff chars, check if swapping makes them equal then return true
        return (cnt.size()==0) || ((cnt.size()==2) && (s1[cnt[0]]==s2[cnt[1]] && s1[cnt[1]]==s2[cnt[0]]));
    }
};