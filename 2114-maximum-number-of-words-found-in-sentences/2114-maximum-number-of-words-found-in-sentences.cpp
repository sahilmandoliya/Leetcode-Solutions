class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxCount=0;
        for(int i=0;i<n;i++){
            int thisCount=0;
            string thisStr=sentences[i];
            for(int j=0;j<thisStr.length();j++){
                if(thisStr[j]==' ') thisCount++;
            }
            thisCount++;
            maxCount=max(thisCount, maxCount);
        }
        return maxCount;
    }
};