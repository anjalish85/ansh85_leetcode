class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //creating another vector to store 2D matrix into 1D vector
        vector <int> v;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }
        
        //sorting the elements 
        sort(v.begin(), v.end());
        
        //0index based vector and hence k-1
        return v[k-1];
    }
};