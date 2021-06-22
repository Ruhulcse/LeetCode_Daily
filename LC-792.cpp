class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        // s = "abcde", words = ["a","bb","acd","ace"]
        int total =0,k=s.size();
        unordered_map<string,int>stringmap;
        //generating map for words array. it will reduce our time cause we don't need to re-calculate any string if                  duplicate contain in words array
        for(int i=0;i<words.size();i++){
            stringmap[words[i]]++;
        }
        //now start with every map string and matching with given string is subsquence or not
        for(auto st: stringmap){
           int index1=0,index2=0;
            string m=st.first;
            int p=m.size();
            while(index1<k&&index2<p){
                if(s[index1]==m[index2]){
                    index1++;
                    index2++;
                }
                else{
                    index1++;
                }
            }
            if(index2==p){
                total+=st.second;
            }
        }
        return total;
    }
};