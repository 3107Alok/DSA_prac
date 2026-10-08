class Solution(object):
    def removeOuterParentheses(self, s):
        str=""
        bl=0
        for ch in s:
            if ch=="(":
                if bl>0:
                    str+=ch
                bl+=1
            else:
                bl-=1
                if bl>0:
                    str+=ch
        return str
        