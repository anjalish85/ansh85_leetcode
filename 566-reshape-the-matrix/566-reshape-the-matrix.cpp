class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows=mat.size();
        int cols=mat[0].size();
        if((r*c!=rows*cols)||(r==rows && c==cols)){
            return mat;
        }
        
       vector<vector<int>> result(r,vector<int>(c,0));
        int current = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int x = current / cols;
                int y = current % cols;
                result[i][j] = mat[x][y];
                current ++;
            }
        }
        return result;
        
    }
};