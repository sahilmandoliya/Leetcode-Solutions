class Solution {
public:
    string convert(string s, int numRows) {
        if(s.empty()) return "";
        if(numRows<=1) return s;
        vector<string> str(numRows);
        int increment=1, k=0;
        for(int i=0;i<(int)s.size();i++){
            str[k].push_back(s[i]);
            if(k==numRows-1) increment=-1;
            else if(k==0) increment=1;
            k+=increment;
        }
        string newstr="";
        for(int i=0;i<str.size();i++) newstr+=str[i];
        return newstr;
    }
};