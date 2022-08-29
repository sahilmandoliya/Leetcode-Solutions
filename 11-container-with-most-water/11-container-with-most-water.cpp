class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max = INT_MIN;
        while(left < right)
        {
            int curr = std::min(height[left], height[right])*(right-left);
            max = std::max(max, curr);
            if(height[left] < height[right])left++;
            else if(height[left] > height[right])right--;
            else
            {
                left++;
                right--;
            }
        }
        
        return max;
    }
};