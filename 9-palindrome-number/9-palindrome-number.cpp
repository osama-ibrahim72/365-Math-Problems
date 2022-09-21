class Solution {
public:
    bool isPalindrome(int x) {
       
        if(x<0){
             //the number has negative sign
            return 0;
        }
        if(x<10){
            //the number has 1 digit
            return 1;
        }
        //convert the number into string 
        string s;
        while(x){
            int tmp = x%10;
            s.push_back(tmp+'0');
            x/=10;
        }
        
        for(int i=0;i<s.size()/2;i++){
            //the number isn't Palindrome 
            if(s[i]!=s[s.size()-1-i])
                return 0;
        }
        //is Palindrome 
        return 1;
    }
};