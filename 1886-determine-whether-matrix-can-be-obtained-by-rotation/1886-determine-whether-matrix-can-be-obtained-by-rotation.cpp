class Solution {
public:
    vector <vector<int>> rotate(vector <vector <int>> mat){
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<i; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i=0; i<mat.size(); i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        return mat;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=1; i<=4; i++){
            mat=rotate(mat);
            if(mat==target)
                return 1;
        }
        return 0;
    }
};