class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(auto i: nums){
            seen[i]++;
        }
        for(auto i: nums){
            if(seen[i] > 1) return true;
        }
        return false;
    }
};