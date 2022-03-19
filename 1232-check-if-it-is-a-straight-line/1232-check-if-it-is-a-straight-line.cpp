class Solution {
public:
    
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<vector<int>>c= coordinates;
        int s=c.size();
        int dx=c[s-1][0]-c[0][0];
        int dy=c[s-1][1]-c[0][1];
        for(int i=1;i<s-1;i++){
            int ddx=c[i][0]-c[0][0];
            int ddy=c[i][1]-c[0][1];
            if(ddx*dy!=ddy*dx)
                return false;
        }
        return true;
        
        
    }
};