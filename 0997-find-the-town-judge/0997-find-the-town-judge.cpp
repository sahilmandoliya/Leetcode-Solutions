class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> deg(N + 1, 0);
        for (auto t : trust) {
            deg[t[1]]++;
        }
        for (int i = 1; i <= N; i++) {
            if (deg[i] == N - 1) {
                bool isJudge = true;
                for (auto t : trust) {
                    if (t[0] == i) {
                        isJudge = false;
                        break;
                    }
                }
                if (isJudge) {
                    return i;
                }
            }
        }
        return -1;
    }
};