class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> mo;//(m,vector<int>(n,0));
        if(m*n!=original.size()){
            return mo;
        }
        vector<vector<int>> p(m,vector<int>(n,0));
        // auto it=original.begin();
        int it=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                p[i][j]=original[it];
                it++;
            }
        }
        return p;
    }
};