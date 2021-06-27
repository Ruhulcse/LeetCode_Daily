#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update> pbds;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        pbds st;
        vector<int>v;
        
        for(int i = (int)(nums.size())-1; i>=0; i--){
            int ans = st.order_of_key({nums[i],i});
            v.push_back(ans);
            st.insert({nums[i],i});
        }
        
        reverse(v.begin(),v.end());
        return v;
        
    }
};