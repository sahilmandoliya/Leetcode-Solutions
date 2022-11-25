class Solution {
public:
    long long MOD=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size(); long long res = 0;
        stack <int> st;
        st.push(-1);
        for(int i=0; i<n+1; i++) {
            int curVal;
            if(i != n) curVal = arr[i]; else curVal = 0;
            while(st.top() != -1 && curVal < arr[st.top()]) {
                int index = st.top(); st.pop();
                int i1 = st.top();
                long add = long((index - i1) * (i - index) * (long)arr[index]) % MOD;
                res += add;
                res %= MOD;
            }
            st.push(i);
        }
        return res;
    }
};