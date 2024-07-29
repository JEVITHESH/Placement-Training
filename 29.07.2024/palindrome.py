class Solution(object):
    def isPalindrome(self, a):
        y=str(a)
        if y==y[::-1]:
            return True
        else:
            return False
