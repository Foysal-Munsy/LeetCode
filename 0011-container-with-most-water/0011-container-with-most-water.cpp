class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int left =0 , right = n-1 , water = -1;
        
        while(left<right)
        {
            int idx = right -left;
            water = max(water, idx*(min(height[left],height[right])));
            
            if(height[left] < height[right]) left++;
            else if(height[right] < height[left]) right--;
            else { 
                if(height[left+1] < height[right-1]) left++;
                else right--;
            }
        }
        return water;
        
    }
};