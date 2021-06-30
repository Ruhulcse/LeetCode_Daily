class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>ch;
        for(int j=s.size()-1;j>=0;j--){
            if(!ch.empty()&&ch.top()==s[j]){
                ch.pop();
            }
            else{
                ch.push(s[j]);
            }
        }
        string result="";
        while(!ch.empty()){
           result+=ch.top();
            ch.pop();
        }
       
        return result;
    }
};