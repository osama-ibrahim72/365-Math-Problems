class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int sum = 0 ;
        for(int i =0 ;i < columnTitle.size();i++){
            int tmp  = columnTitle[i]-'A' + 1;
            sum =sum*26 +tmp;
        }
        return sum;
        
    }
};