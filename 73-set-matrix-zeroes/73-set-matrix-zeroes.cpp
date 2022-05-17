class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <pair<int,int>> p;
        
        if(matrix.size()==1){
            if(std::count(matrix[0].begin(),matrix[0].end(),0)){
                for(int i=0;i<matrix[0].size();i++){
                    matrix[0][i]=0;
                }
            }
        }
        
        else{
            
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==0){
                        p.push_back({i,j});
                    }
                }
            }

            // for(int i=0;i<p.size();i++){
            //     cout<<p[i].first<<" "<<p[i].second<<" ";
            // }

            for(int j=0;j<p.size();j++){
                for(int i=0;i<matrix.size();i++){
                    matrix[i][p[j].second]=0;
                }
            }

            for(int i=0;i<p.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    matrix[p[i].first][j]=0;
                }
            }
            
        }
    }
};