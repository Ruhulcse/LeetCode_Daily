public:
    int maximum69Number (int num) {
        string n= to_string(num);
        int mx=num;
        for(int i=0;i<n.size();i++){
            string temp=n;
            if(n[i]=='6'){
                n[i]='9';
            }
            int local=stoi(n);
            mx=local>mx?local:mx;
            n=temp;
        }
        
        return mx;
    }
};
