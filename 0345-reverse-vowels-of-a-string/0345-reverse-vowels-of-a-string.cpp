class Solution {
public:
    string reverseVowels(string s) {
        stack<char> stack; 
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i]=='u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i]=='O' || s[i]=='U'){
                stack.push(s[i]);
            }
        }
        string res;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i]=='u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i]=='O' || s[i]=='U'){
                res.push_back(stack.top()); 
                stack.pop();
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};