class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // count to get the value freq pair from the array
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }
        // store the pair frequency wise
        vector<pair<int,int>> freq;
        for(auto pair : count){
            freq.push_back({pair.second,pair.first});//second value -> first value
        }
        sort(freq.rbegin(),freq.rend());
        // ans vector to store ans, notice i<k to return the top k values ezz
        vector<int> ans;
        for(int i = 0; i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
