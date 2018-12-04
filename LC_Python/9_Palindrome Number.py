class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        str_num = str(x)
        if str_num[::-1] == str_num:
            return True
        else:
            return False
        