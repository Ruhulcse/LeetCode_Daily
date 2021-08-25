class Solution {
public:
    string reverseWords(string s) {
        vector<string>st;
        string sn="";
        for(int j=s.size()-1,i=0;j>=i;j--){
            if(s[j]==' '){
                st.push_back(sn);
                sn="";
            }
            else{
                sn+=s[j];
            }
        }
        st.push_back(sn);
        reverse(st.begin(),st.end());
        string nw="";
        for(int i=0; i<st.size()-1;i++){
            nw+=st[i]+" ";
        }
        nw+=st.back();
        return nw;
    }
};
