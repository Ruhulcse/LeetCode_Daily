class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mn=nums[0]*nums[1];
        int sz=nums.size();
        int mx=nums[sz-1]*nums[sz-2];
        return mx-mn;
    }
};