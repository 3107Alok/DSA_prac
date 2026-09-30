class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,st=0,end=height.size()-1,data=0;
        while(st<end){
            data=(end-st)*min(height[st],height[end]);
            if(max<data)max=data;
            if(height[st]>=height[end])end--;
            else st++;
        }
        return max;
    }
};