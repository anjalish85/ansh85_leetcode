class NumArray {
    private:
    vector <int> m;
    int s=0;
public:
    NumArray(vector<int>& nums) {
        m=nums;
    }
    
    int sumRange(int left, int right) {
         s=0;
        for(int i=left;i<=right;i++){
            s+=m[i];
        }
        return s;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */