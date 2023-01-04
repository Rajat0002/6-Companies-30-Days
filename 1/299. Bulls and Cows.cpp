class Solution {
public:
    string getHint(string secret, string guess) {
        string s="";
        map<char, int>m;
        int cow=0;
        int bull=0;
        for(int i=0; i<secret.size(); i++){
            m[secret[i]]++;
        }
        for(int i=0; i<guess.size(); i++){
            if(secret[i]==guess[i]){
                bull++;
                
                m[guess[i]]--;
                if( m[guess[i]]==0){
                    m.erase(guess[i]);
                }
            }
            else{continue;}
        }
        for(int i=0; i<guess.size(); i++){
            if(secret[i]!=guess[i]){
                if(m.find(guess[i])!=m.end()){
                  
                    cow++;
                    m[guess[i]]--;
                    if( m[guess[i]]==0){
                        m.erase(guess[i]);
                    }
                }
            }
            else{
                continue;
                }
        }
        s=to_string(bull)+"A"+to_string(cow)+"B";
        return s;
    }
};