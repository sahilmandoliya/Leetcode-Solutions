class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int left=0;
        int right=n-1;
        while(colors[left]==colors[n-1]){
            left++;
        }
        while(colors[right]==colors[0]){
            right--;
        }
        return max(right, n-left-1);
    }
};