class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto c: nums){
            mp[c]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        // int second = INT_MIN;
        // int maxm = INT_MIN;
        int cnt = 0;
        while(cnt < k){
            ans.push_back(v[cnt].first);
            cnt++;
        }
        
        return ans;
    }
};
