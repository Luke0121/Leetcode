class Solution {
public:
    int romanToInt(string s) {
        int dst_num = 0;
        //unordered_map<char, int> MAP={{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        map<char, int> MAP;
        MAP['I'] = 1;
        MAP['V'] = 5;
        MAP['X'] = 10;
        MAP['L'] = 50;
        MAP['C'] = 100;
        MAP['D'] = 500;
        MAP['M'] = 1000;
        
        for(int i = 0; i < s.size(); i++){
            if(i == 0 || MAP[s[i]] <= MAP[s[i - 1]])
                dst_num += MAP[s[i]];
            else
                dst_num += MAP[s[i]] - 2 * MAP[s[i - 1]];
        }
        return dst_num;
    }
};