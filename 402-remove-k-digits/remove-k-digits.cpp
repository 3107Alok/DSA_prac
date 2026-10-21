class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";

        for(char c : num) {
            while(!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            // avoid leading zero
            if(!st.empty() || c != '0')
                st.push_back(c);
        }

        // agar k abhi bhi bacha ho
        while(!st.empty() && k > 0) {
            st.pop_back();
            k--;
        }

        return st.empty() ? "0" : st;
    }
};