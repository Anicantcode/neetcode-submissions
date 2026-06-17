class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //make a unordered map with key -> [strings]
        unordered_map<string,vector<string>> mp;
        //iterate through strings then sort them as sorting will result in the same value for each anagram
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
        //key line is this, this pushback groups together the strings with same sorted value    
            mp[key].push_back(s);
        }
        //make a vector for the answer
        vector<vector<string>> ans;
        // what this does is it gets the key value here first(key)->all same value(anagram), second meaning it pushbacks the 
        //the values with similar sorted values,first are the keys
        for(auto pair : mp){
            ans.push_back(pair.second);
        }
        //returns the ans vector
        return ans;
    }
};
