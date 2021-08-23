class Solution {
public:
    int GCD(int a,int b){
        int divisor;
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                divisor = i;
            }
        }
        return divisor;
    }
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int gratest = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<smallest){
                smallest=nums[i];
            }
            if(nums[i]>gratest){
                gratest=nums[i];
            }
        }
        return  GCD(smallest,gratest);
    }
};
