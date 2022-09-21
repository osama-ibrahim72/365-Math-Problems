class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        if(x<10){
            return 1;
        }
        string s;
        while(x){
            int tmp = x%10;
            s.push_back(tmp+'0');
            x/=10;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i])
                return 0;
        }
        return 1;
    }
};