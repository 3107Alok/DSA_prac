class Solution {
public:
    int numDecodings(string s) {
        int a = 1, b = 1;

        for (int i = 1; i < s.size(); i++) {
            int cur = 0;

            if (s[i] != '0')
                cur += b;

            if (s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6'))
                cur += a;

            a = b;
            b = cur;
        }
        return s[0] == '0' ? 0 : b;
    }
};