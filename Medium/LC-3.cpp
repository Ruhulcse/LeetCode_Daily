class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ch;
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right<s.size()){
            if(ch.find(s[right])==ch.end()){
                ch.insert(s[right++]);
                ans=max(ans,right-left);
            }
            else{
                ch.erase(s[left++]);
            }
        }
        return ans;
    }
};