class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;    
	
    for(string &str: strs){
        string key = str;
		// Grouping anagrams using sorted anagram string as they are equal after sorting
        sort(key.begin(), key.end()); 
        mp[key].push_back(str);
    }
    
    for(auto p: mp)
        ans.push_back(p.second);
    
    return ans;
    }
};