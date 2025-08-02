// Last updated: 8/2/2025, 10:47:54 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int right = height.size()-1;
        int maxArea = 0;
        while(low < right){
            int h = min(height[low],height[right]);
            int w = right - low;
            int area = h * w;
            maxArea = max(maxArea,area);
            if(height[low]<height[right])
            low++;
            else
            right--;
        }
        return maxArea;
    }
};