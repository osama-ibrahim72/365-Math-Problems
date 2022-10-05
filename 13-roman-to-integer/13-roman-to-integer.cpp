class Solution {
public:
    int romanToInt(string s) {
        //map to store the values of chars
        map<char,int>mp;
        //the values
        mp['I']=1,mp['V']=5,mp['X']=10,mp['L']=50,mp['C']=100,mp['D']=500,mp['M']=1000;
        
        int sum=0;
        //calculate the sum of string
        for(int i=0;i<s.size();i++){
            //get value of char and add it to sum
            if(i<s.size()-1){
                if(mp[s[i]]<mp[s[i+1]]){
                    sum+=(mp[s[i+1]]-mp[s[i]]);
                    i++;
                }
                else
                    sum+=mp[s[i]];
            }
            else 
            sum+=mp[s[i]];
        }
        
        return sum;
    }
};