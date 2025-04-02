class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long long max_val = 0;
            int n = nums.size();
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    for (int k = j + 1; k < n; ++k) {
                        long long current = (long long)(nums[i] - nums[j]) * nums[k];
                        if (current > max_val) {
                            max_val = current;
                        }
                    }
                }
            }
            return max_val;
        }
    };