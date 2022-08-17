class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int k=0;
        unordered_map<char,string>m;
        for(char i='a';i<='z'&&k<26;i++){
          m[i]=morse[k];
            k++;
        }
        unordered_set<string>count;
        for(auto x:words){
            string s="";
            for(auto w:x){
                s.append(m[w]);
            }
            count.insert(s);
        }
        
        return count.size();
        
    }
};