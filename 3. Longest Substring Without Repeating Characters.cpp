class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char, int> position;
        int ans = 0;
        
        for(int i = 0, j = 0; j < n; j++){
            if(position.find(s[j]) != position.end()){
                i = max(i, position[s[j]]+1);
            }
            ans = max(ans, j-i+1);
            position[s[j]] = j;
        }
        
        return ans;
    }
};