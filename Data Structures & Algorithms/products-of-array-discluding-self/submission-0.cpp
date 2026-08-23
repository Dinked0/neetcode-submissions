class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zeroes = 0;
        int zero_idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0)
                prod *= nums[i];
            else {
                zeroes ++;
                zero_idx = i;
            }
        }
        vector<int> ans;
        if(zeroes > 1) return vector<int> (nums.size(), 0);

        if(zeroes == 0){
            for(int i: nums){
                ans.push_back(prod/i);
            }
            return ans;
        }
        if(zeroes == 1){
            for(int i = 0; i < nums.size(); i++){
                if(i != zero_idx)
                    ans.push_back(0);
                else ans.push_back(prod);

            }
        }
        return ans;
    }
};
