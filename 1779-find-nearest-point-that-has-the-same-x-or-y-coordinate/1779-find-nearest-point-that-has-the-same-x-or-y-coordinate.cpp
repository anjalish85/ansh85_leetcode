class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
         int res=-1,minDist=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x||points[i][1]==y){
                int curDist=abs(x-points[i][0])+abs(y-points[i][1]);
                if(curDist<minDist) {
                    minDist=curDist;
                res=i;}
            }
        }
        return res;
    }
};