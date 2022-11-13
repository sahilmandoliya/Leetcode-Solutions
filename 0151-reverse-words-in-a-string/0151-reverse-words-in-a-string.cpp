class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        if(n==0) return s;
        stack<string> st;
        string res;
        for(int i=0;i<n;i++){
            string word;
            if(s[i]==' ') continue;
            while(i<n && s[i]!=' ') word+=s[i], i++;
            st.push(word);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()) res+=" ";
        }
        return res;
    }
};