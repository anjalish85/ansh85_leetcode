class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            int sum = arr[i];
            //int len = 1;
            res += sum;
            for (int j = i+1; j < n; j++) {
                sum += arr[j];
                if ((j-i+1)%2!=0) { //if odd length
                    res += sum;
                }
            }
        }
        return res;
    }
};