class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        map<int,int>mp;
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            mp[temp[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};