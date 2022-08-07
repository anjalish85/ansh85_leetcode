class Solution {
public:
    int tribonacci(int n) {
        vector <int> v(38);
        
        v[0]=0;
        v[1]=1;
        v[2]=1;
        
        //storing the values in array format so that we can use it for defining next index
        for(int i=3; i<38; i++){
            v[i]=(v[i-1]+v[i-2]+v[i-3]);
        }
        
        //since series is also 0 indexed therefore no need to do -1
        return v[n];
    }
};