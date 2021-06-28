class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>ch;
        for(int index=0;index<sentence.length();index++){
            ch.insert(sentence[index]);
        }      
        return (ch.size()==26?true:false);
    }
};