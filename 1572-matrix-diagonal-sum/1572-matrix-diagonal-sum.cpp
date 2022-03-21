class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j)
                    s+=mat[i][j];
            }
        }
        for(int i=0;i<mat.size();i++){
            if(i!=(mat[0].size()-i-1)){
                s+=mat[i][mat[i].size()-i-1];
            }
        }
        return s;
    }
};