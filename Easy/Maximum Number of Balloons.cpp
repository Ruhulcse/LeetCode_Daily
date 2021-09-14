class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(int i=0;i<text.size();i++){
           if(text[i]=='b'){
               mp[text[i]]++;
           }
             if(text[i]=='a'){
               mp[text[i]]++;
           }
             if(text[i]=='l'){
               mp[text[i]]++;
           }
             if(text[i]=='o'){
               mp[text[i]]++;
           }
             if(text[i]=='n'){
               mp[text[i]]++;
           }
        }
        cout<<mp['b']<<endl;
       return min(mp['b'],min(mp['a'],min(mp['l']/2,min(mp['o']/2,mp['n']))));
    }
};
