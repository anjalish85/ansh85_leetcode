class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector <int> sum;
        //int s=0;
        for(int j=0;j<accounts.size();j++){
            int s=0;
            for(int i=0;i<accounts[j].size();i++){
                s=s+accounts[j][i];
                sum.push_back(s);
            }
        }
        int p=*max_element(sum.begin(),sum.end());
        return p;
    }
};