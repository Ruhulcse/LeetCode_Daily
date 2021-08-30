class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        for(int i=0;i<=nums.size();i++){
            if(!mp[i]){
                return i;
            }
        }
        return 0;
    }
};
