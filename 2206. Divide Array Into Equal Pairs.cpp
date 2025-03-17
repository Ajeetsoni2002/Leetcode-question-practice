class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            map<int, int>map1;
    
            for (int num : nums) {
            map1[num]++;
        }
           for (const auto& pair : map1) {
            if (pair.second % 2 != 0) {
                return false;
            }
        }
             
            
       return true;     
            
        }
    };