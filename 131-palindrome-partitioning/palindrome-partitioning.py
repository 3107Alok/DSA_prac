class Solution(object):
    def partition(self, s):
        """
        :type s: str
        :rtype: List[List[str]]
        """
        n = len(s)
        dp = [[] for _ in range(n+1)]
        dp[0].append([])

        for i in range(n + 1):
            for j in range(i):
                if s[j : i] == s[j : i][ :: -1]:
                    for prev in dp[j]:
                        dp[i].append(prev + [s[j : i]])
        return dp[n]