class Solution {
    int len{0};
public:
    int maxLength(vector<string>& arr) {
        checkLen("", arr, 0);
        return len;
    }
    void checkLen(string str, vector<string> &arr, int itr){
        if(!isUnique(str)) return ;
        if(str.size()>len) len=str.size();
        for(int i=itr;i<arr.size();i++){
            checkLen(str+arr[i], arr, i+1);
        }
    }
    bool isUnique(string str){
        set<char> st;
        for(auto a: str){
            if(st.find(a)!=st.end()) return false;
            st.insert(a);
        }
        return true;
    }
};