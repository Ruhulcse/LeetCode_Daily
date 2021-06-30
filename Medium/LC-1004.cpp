class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mx=INT_MIN,zero=0,start=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            while(zero>k){
                if(nums[start]==0){
                    zero--;
                }
                start++;
            }
            mx=max(i-start+1,mx);
        }
        return mx;
    }
};