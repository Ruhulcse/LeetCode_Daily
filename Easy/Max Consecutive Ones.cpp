class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0,r=0,right=nums.size(),mx=0;
        while(left<right){
            if(nums[left]==1){
                mx=max(++r,mx);
                left++;
            }
            else{
                r=0;
                left++;
            }
        }
        return mx;
    }
};
