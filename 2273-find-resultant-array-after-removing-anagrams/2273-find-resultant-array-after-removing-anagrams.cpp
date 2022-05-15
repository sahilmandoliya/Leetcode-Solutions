class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=1;i<words.size();i++){
            string str=words[i];
            sort(str.begin(), str.end());
            string str0=words[i-1];
            sort(str0.begin(), str0.end());
            if(str==str0){
                words.erase(words.begin() + i);
                i--;
            }
        }
        return words;
    }
};