class Solution {
public:
    char slowestKey(vector<int>& release, string keys) {
        char res = 0;
        for(int i=0,limit=keys.size(),prev=0,curr, diff, maxGap = INT_MIN;i<limit;i++){
            curr = release[i];
            diff = curr - prev;
            if(diff>maxGap || diff == maxGap && keys[i]>res){
                res = keys[i];
                maxGap = diff;
            }
            prev = curr;
        }
        return res;
    }
};
