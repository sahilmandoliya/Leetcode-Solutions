class Solution {
public:
    string reverseWords(string s) {
        if(s.size()<=1) return s;
        int i=0,j,len=s.size();
        while(i<len){
            j=i+1;
            while(s[j]!=' ' && j<len)  j++;
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
        }
        return s;
        
    }
};