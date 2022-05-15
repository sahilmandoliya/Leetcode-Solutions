class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> newdigits;
        int carry=1;
        int temp;
        for(int i=n-1;i>=0 ;i--){
            temp=digits[i]+carry;
            carry= temp>9? 1 : 0;
            temp%=10;
            newdigits.push_back(temp);
        }
        if(carry==1){
            newdigits.push_back(carry);
        }
        reverse(newdigits.begin(), newdigits.end());
        return newdigits;
    }
};