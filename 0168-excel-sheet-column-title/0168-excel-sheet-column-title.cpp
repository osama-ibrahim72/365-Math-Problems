class Solution {
public:
    string convertToTitle(int columnNumber) {
        string sol ;
        
        while(columnNumber >0){
            columnNumber--;
            int tmp = columnNumber% 26;
            sol.push_back(tmp+'A');
            columnNumber/=26;
        }
        
        reverse(sol.begin(),sol.end());
        return sol;
    }
};