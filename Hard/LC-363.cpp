class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = INT_MIN;
        //prefix sum for every row
        for(int i = 0; i < m; i++)
            for(int j = 1; j < n; j++)
                matrix[i][j] += matrix[i][j-1];
        
        //trying every possible width of rectangle
        for(int st = 0; st < n; st++){
            for(int end = st; end < n; end++){
                set<int>s = {0};
                int pref_sum = 0;
                //current width of rectangle
                for(int i = 0; i < m; i++){
                    int sum = matrix[i][end];
                    if(st > 0) sum -= matrix[i][st-1];
                    pref_sum += sum;
                    auto itr = s.lower_bound(pref_sum - k);
                    if(itr != s.end()) ans = max(ans, pref_sum - (*itr));
                    s.insert(pref_sum);
                }
            }
        }
        return ans;
    }
};
