class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n==1) return "";
        int i;
        for(i=0;i<n;i++){
            if(palindrome[i]!='a' && i!=(n)/2){
                palindrome[i]='a';
                break;
            }
        }
        if(palindrome[n-1]=='a' && i==n){
            palindrome[n-1]='b';
        }
        return palindrome;
    }
};