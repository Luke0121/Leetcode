class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        # zip和set的使用
        res = ""
        if len(strs) == 0 :
            return ""
        if len(strs)  == 1:
            return strs[0]
        for each in zip(*strs):
            if(len(set(each)) == 1):
                res += each[0]
            else:
                return res
        return res