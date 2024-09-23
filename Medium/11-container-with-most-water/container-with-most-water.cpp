class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n= height.size();
        int r = n - 1,l= 0;
        int maxarea = 0;
        int h = 0,w = 0,area = 0;

        while(l < r)
        {
            w = r - l;
            h = min(height[l],height[r]);
            area = w * h;
            maxarea = max(area,maxarea);

            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxarea;
    }
};