class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int a=i, b=j;
                while(a<b){
                    if(s[a]==s[b]){
                        a++;
                        b--;
                    }else{
                        break;
                    }
                }
                if(a>=b){
                    count++;
                }
            }
        }
        return count;
    }
};