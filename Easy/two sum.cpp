class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int findnumber=target-nums[i];
            if(mp.find(findnumber)!=mp.end()){
                res.push_back(mp[findnumber]);
                 res.push_back(i);
                return res;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
