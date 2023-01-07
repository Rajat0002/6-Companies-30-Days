class Solution {
public:
int trailingZeroes(int n) {

    int ans=0;
        while(n){
            n/=5;
            ans+=n;
        }
        return ans;
    // long long fact(int n){
    //     if(n==1 || n==0){
    //         return 1;
    //     }
    //     return n*fact(n-1);
    // }
    // int trailingZeroes(int n) {
    //     long long f=fact(n);
    //     string s=to_string(f);
    //     int x=s.size()-1;
    //     int count=0;
       
    //     for(int i=x;i>=0;i--){
    //         if(s[i]=='0'){
    //             count++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
        
    //     return count;

    }
};