class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int n : nums) {
            count[n]++;
        }

        int max = 0;
        int mostfreq;

        for (auto pair : count) {
            if (pair.second > max) {
                max = pair.second;
                mostfreq = pair.first;
            }
        }

        return mostfreq;
    }
};