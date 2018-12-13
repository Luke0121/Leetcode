class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        strDict = {")": "(", "]": "[", "}": "{"}
        stack = []
        
        for char in s:
            if char in strDict:
                if stack == []:
                    return False
                cur_element = stack.pop()
                if strDict[char] != cur_element:
                    return False
            else:
                stack.append(char)
                
        return not stack