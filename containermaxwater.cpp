class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxWater=0;
        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int area=width*ht;
            maxWater=max(area,maxWater);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};