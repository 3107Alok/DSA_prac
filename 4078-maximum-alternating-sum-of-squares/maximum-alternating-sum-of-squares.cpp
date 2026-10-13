class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> a;
        for(int x : nums) a.push_back(1LL*x*x);
        sort(a.begin(), a.end());
        long long ans = 0;
        for(int i=0; i<a.size()/2; i++)
         {ans -= a[i];}
        for(int i=a.size()/2; i<a.size(); i++)
         {ans += a[i];}
        return ans;
    }
};