class Solution {
public:
    int candy(vector<int>& ratings) {
        //every child must have at least one candy
        vector<int>candy(ratings.size(),1);
        //if only one children
        // if(ratings.size()<=1){
        //     return ratings.size();
        // }
        //higher rating's children will get more candy then left children
        for(int i=0;i<ratings.size()-1;i++){
            if(ratings[i]<ratings[i+1]){
                candy[i+1]=candy[i]+1;
            }
        }
        //higher rating's children will get more candy then right children
        for(int i=ratings.size()-1;i>0;i--){
            if(ratings[i-1]>ratings[i]){
                candy[i-1]=max(candy[i]+1,candy[i-1]);
            }
        }
        return accumulate(candy.begin(),candy.end(),0);
    }
};