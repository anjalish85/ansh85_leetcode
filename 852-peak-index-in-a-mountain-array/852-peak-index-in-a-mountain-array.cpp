class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m= *max_element(arr.begin(),arr.end());
        // int l=0;
        // int r=arr.size()-1;
        // int mid;
        cout<<m;
        // while(l<=r){
        //     mid=l+(r-l)/2;
        //     if(arr[mid]==m)
        //         return mid;
        //     else if(arr[mid]<m)
        //         l=mid+1;
        //     else
        //         r=mid-1;
        // }
        // return mid;
        
        auto it=find(arr.begin(),arr.end(),m);
        return distance(arr.begin(), it);
    }
};