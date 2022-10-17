class Solution {
public:
bool checkIfPangram(string sentence) {
        vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                           'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        
        for (auto& i : vec) {
            if (find(sentence.begin(), sentence.end(), i) == sentence.end()) return false;
        }
        
        return true;
        
    }
};