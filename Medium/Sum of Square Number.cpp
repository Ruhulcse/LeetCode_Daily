class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long int i=0,j=sqrt(c);
        while(i<=j){
            long int result=(i*i+j*j);
            if(result==c){
                return true;
            }
            result>c?j--:i++;
        }
        return false;
    }
};
