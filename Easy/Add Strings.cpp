class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string result;
        
        while(i>-1||j>-1){
            int n = (i>=0?num1[i]-'0':0);
            int m = (j>=0?num2[j]-'0':0);
            int sum = n+m+carry;
            carry = sum/10;
            result+='0' + (sum % 10);
            i--;
            j--;
        }
        
        //HEADING
        reverse(result.begin(),result.end());
        return result; //returning result
    }
};
