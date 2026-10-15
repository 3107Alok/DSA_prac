class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i,n =arr.size();
        vector<int>a;
        for(int x:arr){
            a.push_back(x);
        
        if (x==0){a.push_back(0);}}
        arr=vector<int>(a.begin(),a.begin()+n);
    }
};