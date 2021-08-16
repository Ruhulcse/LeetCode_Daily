class NumArray {
public:
    vector<int>val;
    NumArray(vector<int>& nums) {
        for(auto n: nums){
            val.push_back(n);
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            sum+=val[i];
        }
        return sum;
    }
};
