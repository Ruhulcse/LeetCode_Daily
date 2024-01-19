class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        unordered_map<char,int>::iterator it;
        for(auto c: s){
            mp[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(it=mp.begin();it!=mp.end();it++){
            pq.push(make_pair(it->second,it->first));
            
        }
        string result="";
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                result+=pq.top().second;
            }
            pq.pop();
        }
        return result;
    }
};
