class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        //move elements into deque 
        //because use push_front()
        deque<int>digits(digit.begin(),digit.end());
        
        bool f =0;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                f =1;
                digits[i]=0;
            }
            else{
                digits[i]++;
                f=0;
                break;
            }
        }
        //if all digits are 9
        if(f){
            digits.push_front(1);
        }
        //return elements into vector because the function return vector 
        vector<int>ans(digits.begin(),digits.end());
        return ans;
    }
};