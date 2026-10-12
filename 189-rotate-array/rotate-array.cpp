class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        vector<int>a(nums.end()-k,nums.end());
        a.insert(a.end(),nums.begin(),nums.end()-k);
        nums=a;
    }
};