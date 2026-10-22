class Solution:
    def letterCombinations(self, num):
        if not num:
            return []
        mp = {
            '2': 'abc', '3': 'def', '4': 'ghi',
            '5': 'jkl', '6': 'mno', '7': 'pqrs',
            '8': 'tuv', '9': 'wxyz'}
        ans = []
        def f(i, s):
            if i == len(num):
                ans.append(s)
                return
            for c in mp[num[i]]:
                f(i+1, s + c)
        f(0, "")
        return ans