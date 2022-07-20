// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=1;
        long int r=n;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(isBadVersion(mid)==1){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            //mid=(l+r)/2;
        }
        
        return l;
    }
};