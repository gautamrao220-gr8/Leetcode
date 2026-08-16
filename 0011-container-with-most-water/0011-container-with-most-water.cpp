class Solution {
public:
    int maxArea(vector<int>& height) {
        int w=0;
        int mw=0;
        int i=0;
        int j=height.size()-1;
        while (i<j){
            int h=min(height[i],height[j]);
            int width= j-i;
            w= h*width;
            mw=max(mw,w);
            if (height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mw;
    }
};