class Solution {
public:
    string interpret(string command) {
        
        string result="";
        
        for(int i=0;i<command.size();i++){
            if(command[i]=='('&&command[i+1]=='a'){
                result+="al";
                i+=3;
            }
            else if(command[i]=='('&&command[i+1]==')'){
                result+="o";
                i+=1;
            }
            else{
                result+="G";
            }
        }
        cout<<result<<endl;
        return result;
    }
};