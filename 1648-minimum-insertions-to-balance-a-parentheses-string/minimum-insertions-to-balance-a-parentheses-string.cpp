class Solution {
public:
    int minInsertions(string s) {
        int bal = 0, ans = 0;

        for (char a : s) {
            if (a == '(') {
                bal += 2;

                if (bal % 2 != 0) {
                    ans++;
                    bal--;
                }
            }
            else {
                bal--;

                if (bal < 0) {
                    ans++;
                    bal = 1;
                }
            }
        }

        return ans + bal;
    }
};