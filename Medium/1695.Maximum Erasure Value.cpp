class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        
        unordered_set<int>value;
        int left=0,right=0,ans=0;
        int mx=0;
        while(right<nums.size()){
            if(value.find(nums[right])==value.end()){
                ans+=nums[right];
                value.insert(nums[right++]);
                mx=max(mx,ans);
            }
            else{
                ans-=nums[left];
                value.erase(nums[left++]);
            }
        }
        return mx;
    }
};
