class Solution {
public:
    int calculate(string s) {
        stack<pair<int, int>> st;
        int res=0;
        int sign=1;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='0'){
                long num=0;
                while(i<n && s[i]>='0'){
                    num=num*10+s[i++]-'0';
                }
                i--;
                res+=num*sign;
                sign=1;
            }else if(s[i]=='('){
                st.push({res, sign});
                res=0;
                sign=1;
            }else if(s[i]==')'){
                res=st.top().first+st.top().second*res;
                st.pop();
            }else if(s[i]=='-'){
                sign*=-1;
            }
        }
        return res;
    }
};