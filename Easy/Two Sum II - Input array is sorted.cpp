class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<int>result;
        for(int i=0,j=numbers.size()-1;i<j;){
            if(numbers[i]+numbers[j]==target){
                result.push_back(i+1);
                result.push_back(j+1);
            }
           numbers[i]+numbers[j]<target?i++:j--;
        }
        return result;
    }
};
