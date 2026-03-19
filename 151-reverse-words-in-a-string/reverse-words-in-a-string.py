class Solution:
    def reverseWords(self, s: str) -> str:
        temp = s.split()
        temp.reverse()
        s = (' ').join(temp)
        return s