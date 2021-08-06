class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int Alex = 0;
        int Lee = 0;
        int i=0,j=piles.size()-1;
        bool alexturn = true;
        while(i<=j){
            if(alexturn){
                piles[i]>=piles[j]?Alex+=piles[i++]:Alex+=piles[j--];
                alexturn = false;
            }
            else{
                piles[i]<=piles[j]?Lee+=piles[i++]:Lee+=piles[j--];
                alexturn = true;
            }
        }
       
        return (Alex>Lee);
    }
};
