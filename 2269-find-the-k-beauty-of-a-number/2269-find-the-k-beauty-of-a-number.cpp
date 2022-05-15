#include<string>
#include<iostream>
#include <cstdlib>

class Solution { 
public:
    int divisorSubstrings(int num, int k) {
        int ans=0;
        string str= to_string(num);
        for(int i=0;i<=str.size()-k;i++){
            string substr="";
            for(int j=i;j<i+k;j++){
                substr+=str[j];
            }
            int x =stoi(substr);
            if(!x) continue;
            if(num%x==0){
                ans++;
            }
        }
        return ans;
    }
};