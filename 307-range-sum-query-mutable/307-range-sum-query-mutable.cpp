class NumArray {
    vector <int> n;
    int s;
public:
    NumArray(vector<int>& nums) {
        n=nums;
        s=accumulate(n.begin(), n.end(), 0);
    }
    
    void update(int index, int val) {
        s-=n[index];
        //updation
        n[index]=val;
        s+=val;
    }
    
    int sumRange(int left, int right) {
        int su=s;
        for(int i=0;i<left;i++){
            su-=n[i];
        }
        for(int i=right+1; i<n.size(); i++){
            su-=n[i];
        }
        return su;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */