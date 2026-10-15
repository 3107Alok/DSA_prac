class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            int c=0;
            while(x){
                c++;
                x/=10;
            }
            if(c%2==0){
                ans+=1;
            }
        }
        return ans;
    }
};