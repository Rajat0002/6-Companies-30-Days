class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long long>s;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" &&tokens[i]!="*" &&tokens[i]!="/")
                s.push(stoi(tokens[i])); //converted into integer
            else{
                long long a=s.top();
                s.pop();
                if(tokens[i]=="+")
                    s.top()+=a;
                else if(tokens[i]=="-")
                    s.top()-=a;
                else if(tokens[i]=="*")
                    s.top()*=a;
                else if(tokens[i]=="/")
                    s.top()/=a;
            }
        }
        return s.top();
    }
};