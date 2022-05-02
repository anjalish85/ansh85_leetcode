class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> A(nums.begin(),nums.end());
      int len = A.size()-1;
    for(int i = 0; i<len; i++){

        if(A[i]%2 == 1 )
        swap( A[i--], A[len--] );
    }
    return A;
    }
};