class Solution {
public:
    int maxDepth(string s) {
        int a=0,x=0;
        for (auto& i:s){
            if(i=='(') x++;
            if(i==')')x--;
            a=max(a,x);
        }
        return a;
    }
};