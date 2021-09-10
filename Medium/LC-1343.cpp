class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
       threshold*=k;
       int result = accumulate(arr.begin(),arr.begin()+k,0),
        count = (result>=threshold);
       for(int i=k;i<arr.size();i++){
           result+=(arr[i]-arr[i-k]);
          //counting.......
           count+= (result>=threshold);
       }
      return count;
    }
};
