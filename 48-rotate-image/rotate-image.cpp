class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        int i,j;
        for (i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<n/2;j++){
                int temp=a[i][j];
                a[i][j]=a[i][n-1-j];
                a[i][n-1-j]=temp;
            }
        }
    }
};