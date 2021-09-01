class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        vector<bool>seen(n);
        for(auto n : nums){
            int cnt=0;
            while(!seen[n]){
                seen[n] = true;
                cnt++;
                n = nums[n];
            }
            result = max(cnt,result);
        }
        return result;
    }
};
