class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        #定义字典
        dst_num = 0
        num_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        for i in range(len(s) - 1):
            if(num_dict[s[i]] < num_dict[s[i + 1]]):
                dst_num -= num_dict[s[i]]
            else:
                dst_num += num_dict[s[i]]
        #把最后一个数加上
        return (dst_num + num_dict[s[-1]])