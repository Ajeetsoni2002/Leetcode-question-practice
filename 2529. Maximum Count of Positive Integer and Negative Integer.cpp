class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int count=0,dount=0;
            for(int i=0; i<nums.size();i++){
                if(nums[i]<0){
                    count++;
                }
                if(nums[i]>0){
                    dount++;
                }
            }
            return max(count,dount);
        }
    };