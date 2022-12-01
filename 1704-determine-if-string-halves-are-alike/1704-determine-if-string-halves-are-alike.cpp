class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> vowel;
        string vowels = "aeiouAEIOU";
        for(int i = 0; i <  10; ++i)
            vowel.insert(vowels[i]);
        int acnt = 0, bcnt = 0;
        int n = s.size();
        string a = s.substr(0, n/2);
        string b = s.substr(n/2, n/2);
        for(int i = 0; i < n/2; ++i){
            if(vowel.count(a[i]))   ++acnt;
            if(vowel.count(b[i]))   ++bcnt;
        }
        return acnt == bcnt;
    }
};