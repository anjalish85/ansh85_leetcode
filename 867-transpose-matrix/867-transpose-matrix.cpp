class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        // (rows, vector<int> (cols, val))
        
        vector<vector<int>> matrix2(n, vector<int> (m,0));
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix2[j][i]=matrix[i][j];
            }
        }
        
        return matrix2;
    }
};