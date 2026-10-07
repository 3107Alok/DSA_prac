class Solution {
public:
    int maxProfit(vector<int>& p) {
       if (p.empty())
        {
            return 0;
        }
        int minp=p[0];
        int prft=0;
        int n = p.size();
        for(int i=1;i<n;i++){
                minp=min(minp,p[i]);
                prft=max(prft,p[i]-minp);
            }
            return prft;
        }
};