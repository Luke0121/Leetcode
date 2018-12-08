class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        int index = 0;
        int min_len = strs[0].size();
        for(int i = 0; i < strs.size(); i++){
            if(strs[i] == "")
                return "";
            if(strs[i].size() < min_len){
                min_len = strs[i].size();
                index = i;
            }                
        }
        
        for(int i = 0; i < min_len; i++){
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != strs[0][i])
                    return strs[0].substr(0, i);
            }
        }
        return strs[index];        
    }
};