class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() <= 1) return 0;

        int left = 0, right = height.size() - 1;
        int max_water = 0;

        while(left < right) {
            int current = (right - left) * min(height[left], height[right]);
            if(current > max_water) max_water = current;

            if(height[left] < height[right])
                ++left;
            else
                --right;

        }
        return max_water;
    }

};