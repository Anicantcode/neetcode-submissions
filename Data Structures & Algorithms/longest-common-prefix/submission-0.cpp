class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string ans = "";

        for(int i = 0; i<strs[0].size();i++){
            char current = strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(current == strs[j][i]){
                    
                }
                else{
                    return ans;
                }
                
            }
            ans += current;
        }
        return ans;
        
        
        

    }
};