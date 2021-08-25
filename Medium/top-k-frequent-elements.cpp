class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>result;
        priority_queue<pair<int,int>>pq;
        for(it=mp.begin();it!=mp.end();it++){
           pq.push(make_pair(it->second,it->first));
        }
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(result[i]);
        }
        return res;
    }
};
